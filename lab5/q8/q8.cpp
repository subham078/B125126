//q.8. Counting Operation

#include <iostream>
using namespace std;

int countData(int num) {
    if (num == 0) 
    return 1;
    int count = 0;
    if (num > 0)
    while (num > 0) {
        count++;
        num /= 10;
    }
    return count;
}

int countData(int arr[], int size) {
    return size;
}

int countData(char arr[], int size, char target) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) count++;
    }
    return count;
}

int main() {
    int num = 45091;
    int arr[] = {10, 20, 30, 40};
    char letters[] = {'b', 'a', 'n', 'a', 'n', 'a'};

    cout << "Digits in " << num << ": " << countData(num) << endl;
    cout << "Elements in array: " << countData(arr, 4) << endl;
    cout << "Occurrences of 'a': " << countData(letters, 6, 'a') << endl;
    return 0;
}