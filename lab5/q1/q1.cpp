//q.1.Number Calculator 

#include <iostream>
using namespace std;

int calculate(int a, int b) {
    return a + b;
}

int calculate(int a, int b, int c) {
    return a + b + c;
}

double calculate(double a, double b) {
    return a + b;
}

int main() {
    cout << "Two integers sum: " << calculate(10, 20) << endl;
    cout << "Three integers sum: " << calculate(10, 20, 30) << endl;
    cout << "Two floats sum: " << calculate(5.5, 4.2) << endl;
    return 0;
}