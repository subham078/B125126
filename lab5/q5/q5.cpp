//q.5.Modify a Value

#include <iostream>
using namespace std;

void modify(int &num, int valToAdd) {
    num += valToAdd;
}


void modify(double &num, double valToAdd) {
    num += valToAdd;
}


void modify(int *ptr, int newVal) {
    if (ptr != nullptr) {
        *ptr = newVal;
    }
}

int main() {
    int a = 10;
    double b = 5.5;
    int c = 100;

    cout << "Before: a = " << a << ", b = " << b << ", c = " << c << endl;

    modify(a, 5);       
    modify(b, 2.5);     
    modify(&c, 999);    

    cout << "After:  a = " << a << ", b = " << b << ", c = " << c << endl;
    return 0;
}