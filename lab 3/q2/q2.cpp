//Q.2.DYNAMIC ARRAY OF INTEGERS

#include <iostream>
using namespace std;

int main (){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int *arr=new int[n];
    cout<<"Enter "<<n<<" integers: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"You entered: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    delete[] arr;
    return 0;
}