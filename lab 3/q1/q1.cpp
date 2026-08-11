//1. DYNAMIC INTEGER ALLOCATION

#include <iostream>
using namespace std;

int main (){
    int *p=new int;
    cout<<"Enter an integer: ";
    cin>>*p;
    cout<<"You entered: "<<*p<<endl;
    delete p;
    return 0;

}