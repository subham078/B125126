//q.2.Water Tank Level

#include <iostream>
using namespace std;

int main() {
    int tankLevel = 70;     
    int* ptr = &tankLevel;  

    cout << "Current Water Tank Level: " << *ptr << "%" << endl;

    *ptr = *ptr + 20;

    cout << "Updated Water Tank Level: " << *ptr << "%" << endl;

    return 0;
}