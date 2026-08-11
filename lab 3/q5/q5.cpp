//Q.5.DYNAMIC OBJECT CREATION

#include <iostream>
using namespace std;    

class Student {
private:
    int rollNumber;
    string name;
    float marks;
public: 

    void acceptDetails() {
        cout << "Enter Roll Number: ";
        cin >> rollNumber;
        
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Marks: ";
        cin >> marks;
    }

    void displayDetails() {
        cout << "\n Student Details \n";
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Name       : " << name << endl;
        cout << "Marks      : " << marks << endl;
        
    }
};

int main() {
    Student *s = new Student;
    s->acceptDetails();
    s->displayDetails();
    delete[] s;
    return 0;
}