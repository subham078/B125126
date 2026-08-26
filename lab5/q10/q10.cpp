//q.10. Overloaded Data Processor

#include <iostream>
using namespace std;

double process(int a, int b) {
    return a * b;
}


double process(int a, double b) {
    return a * b;
}


double process(double a, double b) {
    return a * b;
}

double process(int arr[], int size) {
    double sum = 0;
    for (int i = 0; i < size; i++) 
    sum += arr[i];
    return (size > 0) ? (sum / size) : 0;
}

double process(int *p1, int *p2) {
    return (*p1) * (*p2);
}

int main() {
    int x = 4, y = 5;
    double d1 = 2.5, d2 = 4.0;
    int arr[] = {10, 20, 30, 40};

    cout << "process(int, int) " << process(x, y) << endl;
    cout << "process(int, double) " << process(x, d1) << endl;
    cout << "process(double, double) " << process(d1, d2) << endl;
    cout << "process(arr, size) [Average]  " << process(arr, 4) << endl;
    cout << "process(&x, &y)  " << process(&x, &y) << endl;
    return 0;
}