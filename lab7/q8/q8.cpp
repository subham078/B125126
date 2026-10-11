//q.8.Hospital System — Protected Members

#include <iostream>
#include <string>
using namespace std;

class Patient
{
protected:
    string patientName;
    int patientID;
    int age;

public:
    Patient(string name, int id, int a)
    {
        patientName = name;
        patientID = id;
        age = a;
    }
};

class InPatient : public Patient
{
private:
    double roomCharges;
    int numberOfDays;

public:
    InPatient(string name, int id, int a,
              double charges, int days)
        : Patient(name, id, a)
    {
        roomCharges = charges;
        numberOfDays = days;
    }

    void displayBill()
    {
        double totalBill = roomCharges * numberOfDays;

        cout << "Patient Name: " << patientName << endl;
        cout << "Patient ID: " << patientID << endl;
        cout << "Age: " << age << endl;
        cout << "Room Charges per Day: " << roomCharges << endl;
        cout << "Number of Days: " << numberOfDays << endl;
        cout << "Total Hospital Bill: " << totalBill << endl;
    }
};

int main()
{
    InPatient p("Amit", 101, 21, 3000, 5);

    p.displayBill();

    return 0;
}