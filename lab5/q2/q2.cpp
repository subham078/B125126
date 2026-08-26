//q.2.Value Comparison

#include <iostream>
using namespace std;

int findMax(int a, int b) {
    return (a > b) ? a : b;
}

double findMax(double a, double b) {
    return (a > b) ? a : b;
}

int findMax(int a, int b, int c) {
    int maxVal = (a > b) ? a : b;
    return (maxVal > c) ? maxVal : c;
}

int main() {
    cout << "Max of 15 and 25: " << findMax(15, 25) << endl;
    cout << "Max of 12.4 and 7.8: " << findMax(12.4, 7.8) << endl;
    cout << "Max of 10, 50, and 30: " << findMax(10, 50, 30) << endl;
    return 0;
}