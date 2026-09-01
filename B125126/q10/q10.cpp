#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of contact numbers: ";
    cin >> n;

    long long *contacts = new long long[n];

    cout << "Enter " << n << " contact numbers:\n";
    for (int i = 0; i < n; i++) {
        cin >> contacts[i];
    }

    long long searchNumber;
    cout << "Enter contact number to search: ";
    cin >> searchNumber;

    
    long long *ptr = contacts;
    int position = 0;
    bool found = false;

    while (ptr < contacts + n) {
        if (*ptr == searchNumber) {
            found = true;
            break;
        }

        ptr++;
        position++;
    }

    if (found) {
        cout << "Contact number found at position: "
             << position + 1 << endl;
    } else {
        cout << "Contact number not found." << endl;
    }


    delete[] contacts;

    return 0;
}
