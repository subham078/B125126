//q.1. Employee Salary - Multilevel Inheritance

#include <iostream>
#include <string>
using namespace std;

class Employee
{
protected:
    string name;
    double basicSalary;

public:
    Employee(string n, double salary)
    {
        name = n;
        basicSalary = salary;
    }
};

class Developer : public Employee
{
protected:
    int experience;

public:
    Developer(string n, double salary, int exp)
        : Employee(n, salary)
    {
        experience = exp;
    }
};

class SeniorDeveloper : public Developer
{
private:
    double projectBonus;

public:
    SeniorDeveloper(string n, double salary, int exp, double bonus)
        : Developer(n, salary, exp)
    {
        projectBonus = bonus;
    }

    void displaySalary()
    {
        double experienceBonus =
            0.05 * basicSalary * experience;

        double finalSalary =
            basicSalary + experienceBonus + projectBonus;

        cout << "Employee Name: " << name << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "Experience: " << experience << " years" << endl;
        cout << "Experience Bonus: " << experienceBonus << endl;
        cout << "Project Bonus: " << projectBonus << endl;
        cout << "Final Salary: " << finalSalary << endl;
    }
};

int main()
{
    SeniorDeveloper s("Rahul", 50000, 3, 10000);

    s.displaySalary();

    return 0;
}
