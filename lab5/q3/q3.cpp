//q.3.Array Total

#include <iostream>
using namespace std;


int findTotal(int arr[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) total += arr[i];
    return total;
}


double findTotal(double arr[], int size) {
    double total = 0;
    for (int i = 0; i < size; i++) total += arr[i];
    return total;
}


int findTotal(int arr[], int size, int elementsToConsider) {
    int total = 0;
    int limit = (elementsToConsider < size) ? elementsToConsider : size;
    for (int i = 0; i < limit; i++) total += arr[i];
    return total;
}

int main() {
    int intArr[] = {1, 2, 3, 4, 5};
    double floatArr[] = {1.1, 2.2, 3.3};

    cout << "Int array total: " << findTotal(intArr, 5) << endl;
    cout << "Float array total: " << findTotal(floatArr, 3) << endl;
    cout << "First 3 elements of int array: " << findTotal(intArr, 5, 3) << endl;
    return 0;
}