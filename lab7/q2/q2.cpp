//q.2.Student Result — Function Overriding

#include <iostream>
#include <string>
using namespace std;

class Student
{
protected:
    string name;
    int rollNo;

public:
    Student(string n, int r)
    {
        name = n;
        rollNo = r;
    }

    virtual void calculateResult()
    {
        cout << "Student Result" << endl;
    }
};

class RegularStudent : public Student
{
private:
    int m1, m2, m3;

public:
    RegularStudent(string n, int r, int a, int b, int c)
        : Student(n, r)
    {
        m1 = a;
        m2 = b;
        m3 = c;
    }

    void calculateResult() override
    {
        int total = m1 + m2 + m3;

        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Total Marks: " << total << endl;
    }
};

class ScholarshipStudent : public Student
{
private:
    int m1, m2, m3;

public:
    ScholarshipStudent(string n, int r, int a, int b, int c)
        : Student(n, r)
    {
        m1 = a;
        m2 = b;
        m3 = c;
    }

    void calculateResult() override
    {
        int total = m1 + m2 + m3 + 5;

        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Total Marks with Bonus: " << total << endl;
    }
};

int main()
{
    RegularStudent r("Rahul", 101, 80, 75, 85);
    ScholarshipStudent s("Amit", 102, 80, 75, 85);

    r.calculateResult();
    cout << endl;
    s.calculateResult();

    return 0;
}