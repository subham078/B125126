#include <iostream>
using namespace std;

class Calculator {
private:
    float num1;
    float num2;

public:
    void inputNumbers() {
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;
    }

    void add() { cout << "Addition: " << num1 + num2 << endl; }
    void subtract() { cout << "Subtraction: " << num1 - num2 << endl; }
    void multiply() { cout << "Multiplication: " << num1 * num2 << endl; }
    void divide() {
        if (num2 == 0) {
            cout << "Division: Error! Division by zero is not allowed." << endl;
        } else {
            cout << "Division: " << num1 / num2 << endl;
        }
    }
};

int main() {
    Calculator calc;
    calc.inputNumbers();
    cout << "\n--- Arithmetic Operations ---" << endl;
    calc.add();
    calc.subtract();
    calc.multiply();
    calc.divide();
    return 0;
}