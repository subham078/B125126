//q.4. Element Search

#include <iostream>
using namespace std;


int search(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) return i;
    }
    return -1;
}


int search(char arr[], int size, char target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) return i;
    }
    return -1;
}


int search(int arr[], int start, int end, int target) {
    for (int i = start; i <= end; i++) {
        if (arr[i] == target) return i;
    }
    return -1;
}

int main() {
    int iArr[] = {10, 20, 30, 40, 50};
    char cArr[] = {'a', 'b', 'c', 'd'};

    int pos1 = search(iArr, 5, 30);
    int pos2 = search(cArr, 4, 'c');
    int pos3 = search(iArr, 1, 3, 40);

    cout << (pos1 != -1 ? "Found at index " + to_string(pos1) : "Not found") << endl;
    cout << (pos2 != -1 ? "Found at index " + to_string(pos2) : "Not found") << endl;
    cout << (pos3 != -1 ? "Found in range at index " + to_string(pos3) : "Not found in range") << endl;
    return 0;
}