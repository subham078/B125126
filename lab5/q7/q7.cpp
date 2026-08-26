//q.7. Compare Data Sets

#include <iostream>
using namespace std;

void compare(int a, int b) {
    cout << "Larger int: " << ((a > b) ? a : b) << endl;
}

void compare(double a, double b) {
    cout << "Larger float: " << ((a > b) ? a : b) << endl;
}

void compare(int arr1[], int arr2[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr1[i] != arr2[i]) {
            cout << "Arrays are NOT identical." << endl;
            return;
        }
    }
    cout << "Arrays are IDENTICAL." << endl;
}

int main() {
    int a1[] = {1, 2, 3}, a2[] = {1, 2, 3};

    compare(10, 20);
    compare(15.7, 9.2);
    compare(a1, a2, 3);
    return 0;
}