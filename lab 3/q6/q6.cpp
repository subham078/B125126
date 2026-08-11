//Q.6.ARRAY OF DYNAMIC OBJECTS

#include <iostream>
using namespace std;

class Employee {
private:    
    int employeeID;
    string name;
    float salary;
public:
    void acceptDetails() {
        cout << "Enter Employee ID: ";
        cin >> employeeID;
        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Salary: ";
        cin >> salary;
    }

    void displayDetails() {
        cout << "\n Employee Details \n";
        cout << "Employee ID: " << employeeID << endl;
        cout << "Name       : " << name << endl;
        cout << "Salary     : " << salary << endl;
    }
};

int main() {
    int n;
    cout << "Enter the number of employees: ";
    cin >> n;

    Employee *employees = new Employee[n];

    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for Employee " << (i + 1) << ":\n";
        employees[i].acceptDetails();
    }

    cout << "\nDisplaying Employee Details:\n";
    for (int i = 0; i < n; i++) {
        employees[i].displayDetails();
    }

    delete[] employees;
    return 0;

}