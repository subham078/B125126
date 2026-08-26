//q.6. Display Data

#include <iostream>
using namespace std;

void display(int val) {
    cout << "Integer: " << val << endl;
}

void display(float val) {
    cout << "Float: " << val << endl;
}

void display(char val) {
    cout << "Character: " << val << endl;
}

void display(int arr[], int size) {
    cout << "Int Array: ";
    for (int i = 0; i < size; i++) 
    cout << arr[i] << " ";
    cout << endl;
}

void display(char arr[], int size) {
    cout << "Char Array: ";
    for (int i = 0; i < size; i++) 
    cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int i = 42;
    float d = 3.14;
    char c = 'Z';
    int iList[] = {1, 2, 3};
    char cList[] = {'H', 'i'};

    display(i);
    display(d);
    display(c);
    display(iList, 3);
    display(cList, 2);
    return 0;
}