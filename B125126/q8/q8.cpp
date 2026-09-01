#include <iostream>
using namespace std;

void addFive(int *marks, int n) {
    for (int i = 0; i < n; i++) {
        *(marks + i) += 5;
    }
}

int main() {
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    int marks[n];

    cout << "Enter marks of " << n << " students:\n";
    for (int i = 0; i < n; i++) {
        cin >> marks[i];
    }

    // Display marks before modification
    cout << "\nMarks before modification:\n";
    for (int i = 0; i < n; i++) {
        cout << marks[i] << " ";
    }

    // Add 5 marks using pointer
    addFive(marks, n);

    // Display marks after modification
    cout << "\n\nMarks after adding 5:\n";
    for (int i = 0; i < n; i++) {
        cout << marks[i] << " ";
    }

    return 0;
}
