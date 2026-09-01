//q.4.Train Seat Correction


#include <iostream>
using namespace std;

int main (){
    int beforeArr[8]={1,2,3,4,5,6,0,8};
    int* p =beforeArr;
    cout << "Before Correction: "<< endl;
    for (int i=0;i<8;i++){
       cout << *(p + i) << " " <<endl;
    }
    int n;
    cout << "Enter the seat number which is wrong: "<<endl;
    cin >> n;
    int* ptr=&n;
    for (int i=0;i<8;i++){
    cout << *(ptr + i) << " " <<endl;

}
return 0;
}

