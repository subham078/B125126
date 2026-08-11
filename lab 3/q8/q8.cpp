//Q.8.DYNAMIC STUDENT MARKS SYSTEM

#include <iostream>
using namespace std;

class Student {
private:
    int rollNumber;
    string name;
    int nos;
public:
    void acceptDetails(){
       cout<<"Enter the Roll Number :";
       cin>>rollNumber;
       cin.ignore();
       cout<<"Enter the Name: ";
       getline(cin,name);
       cout<<"Enter Number Subject: ";
       cin>>nos;
       
    }

    void displayDetails() {
        cout << "\n Student Details \n";
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Name       : " << name << endl;
        cout << "Subjects     : " <<nos << endl;
        
    }
};

int main() {
    int n;
    cout << "Enter the number of students: ";
    cin >> n;
    Student *s = new Student [n];
       
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for Student " << (i + 1) << ":\n";
         s[i].acceptDetails();
        s[i].displayDetails();
       
    } 
    
        delete[] s;
        return 0;
}
