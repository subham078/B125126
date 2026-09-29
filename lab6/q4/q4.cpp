//q4.Negative Value Converter

#include <iostream>
using namespace std;

class Number
{
    int value;

public:
    Number(int v = 0)
    {
        value = v;
    }
    Number operator-()
    {
        Number temp;
        temp.value = -value;

        return temp;
    }
    void display()
    {
        cout << value;
    }
};

int main()
{
    Number n1(25);
    Number n2 = -n1;
    cout << "n1 = ";
    n1.display();
    cout << endl;
    cout << "n2 = ";
    n2.display();
    return 0;
}