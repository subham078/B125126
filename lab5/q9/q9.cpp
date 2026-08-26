//q.9. Maximum Value Finder 

#include <iostream>
using namespace std;

int findMaxVal(int a, int b) {
    return (a > b) ? a : b;
}

int findMaxVal(int *p1, int *p2) {
    return (*p1 > *p2) ? *p1 : *p2;
}

int findMaxVal(int *arr, int size) {
    int maxVal = *arr;
    for (int i = 1; i < size; i++) {
        if (*(arr + i) > maxVal) {
            maxVal = *(arr + i);
        }
    }
    return maxVal;
}

int main() {
    int x = 25, y = 40;
    int arr[] = {12, 89, 45, 67, 23};

    cout << "Direct ints max: " << findMaxVal(x, y) << endl;
    cout << "Pointer ints max: " << findMaxVal(&x, &y) << endl;
    cout << "Array pointer max: " << findMaxVal(arr, 5) << endl;
    return 0;
}