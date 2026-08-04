#include<iostream>
#include<string>
using namespace std;

class Employee {
    private:
        int empID;
        string empName;
        double basicSalary;
        double hra;
        double da;
        double grossSalary;
    
    public:
        void acceptDetails() {
            cout << "Enter Employee ID: ";
            cin >> empID;
            cin.ignore();
            cout << "Enter Employee Name: ";
            getline(cin, empName);
            cout << "Enter Basic Salary: ";
            cin >> basicSalary;
        }

        void calculateSalary() {
            hra = 0.1 * basicSalary; // HRA is 10% of basic salary
            da = 0.2 * basicSalary;  // DA is 20% of basic salary
            grossSalary = basicSalary + hra + da;
        }

        void displayDetails() {
            cout << "\n--- Employee Details ---" << endl;
            cout << "Employee ID   : " << empID << endl;
            cout << "Employee Name : " << empName << endl;
            cout << "Basic Salary  : " << basicSalary << endl;
            cout << "HRA           : " << hra << endl;
            cout << "DA            : " << da << endl;
            cout << "Gross Salary  : " << grossSalary << endl;
        }
};

int main() {
    Employee emp;
    emp.acceptDetails();
    emp.calculateSalary();
    emp.displayDetails();
    return 0;
}