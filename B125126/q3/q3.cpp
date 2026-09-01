//q.3.Sports Equipement Rack

#include <iostream>
using namespace std;

int main (){

int arr[5] = {10, 20, 30, 40, 50};
int* ptr = arr;
cout << "Sports Equipement Rack ID: ";
for(int i = 0; i < 5; i++){
    cout << *(ptr + i) << " " <<endl;
    cout <<"Address of element: " <<(ptr+i) << " ";
    return 0;
}
}

