//q.5.Student Performance — Multiple Inheritance

#include <iostream>
using namespace std;

class Academic
{
protected:
    int maths, physics, chemistry;

public:
    Academic(int m, int p, int c)
    {
        maths = m;
        physics = p;
        chemistry = c;
    }
};

class Sports
{
protected:
    int sportsMarks;

public:
    Sports(int s)
    {
        sportsMarks = s;
    }
};

class StudentResult : public Academic, public Sports
{
public:
    StudentResult(int m, int p, int c, int s)
        : Academic(m, p, c), Sports(s)
    {
    }

    void displayResult()
    {
        int total = maths + physics + chemistry + sportsMarks;
        double average = total / 4.0;

        cout << "Maths: " << maths << endl;
        cout << "Physics: " << physics << endl;
        cout << "Chemistry: " << chemistry << endl;
        cout << "Sports: " << sportsMarks << endl;

        cout << "Total: " << total << endl;
        cout << "Average: " << average << endl;
    }
};

int main()
{
    StudentResult s(80, 75, 85, 90);

    s.displayResult();

    return 0;
}