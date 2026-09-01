//q.1.Mobile Battery Update

#include <iostream>
using namespace std;


int main() {
    int battery = 50;       
    int* ptr = &battery;    

    cout << "Current Battery Percentage: " << *ptr << "%" << endl;

    *ptr = *ptr + 30;
    cout << "Updated Battery Percentage: " << *ptr << "%" << endl;

    return 0;
}
