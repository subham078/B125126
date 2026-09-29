//q6.Counter Increment 

#include <iostream>
using namespace std;

class Counter
{
    int value;
public:
    Counter(int v = 0)
    {
        value = v;
    }
    Counter operator++()
    {
        ++value;
        return *this;
    }
    Counter operator++(int)
    {
        Counter temp = *this;
        value++;
        return temp;
    }
    void display()
    {
        cout << value;
    }
};

int main()
{
    Counter c(5);
    cout << "Initial value: ";
    c.display();
    cout << endl;
    ++c;
    cout << "After prefix ++c: ";
    c.display();
    cout << endl;
    c++;
    cout << "After postfix c++: ";
    c.display();
    return 0;
}