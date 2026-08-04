
#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string rollNumber;
    string name;
    float marks;

public:
    void acceptDetails() {
        cout << "Enter Roll Number: ";
        cin >> rollNumber;
        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Marks: ";
        cin >> marks;
    }

    void displayDetails() {
        cout << "\n Student Details " << endl;
        cout << "Roll Number : " << rollNumber << endl;
        cout << "Name        : " << name << endl;
        cout << "Marks       : " << marks << endl;
    }
};

int main() {
    Student s1;
    s1.acceptDetails();
    s1.displayDetails();
    return 0;
}