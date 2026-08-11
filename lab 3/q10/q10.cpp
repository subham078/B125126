//q10.dynamic employee salary analysis

#include <iostream>
#include <string>
using namespace std;

class Employee {
    int id;
    string name;
    float basicSalary;
    int numMonths;
    float* earnings;                            
public:
    void acceptDetails() {                       
        cout << "Enter ID: "; cin >> id;
        cout << "Enter Name: "; cin >> ws; getline(cin, name);
        cout << "Enter Basic Salary: "; cin >> basicSalary;
        cout << "Enter number of months: "; cin >> numMonths;
    }

    void processEarnings() {                    
        earnings = new float[numMonths];        
        float totalEarnings = 0;
        int highestMonth = 0;
        
        for(int i = 0; i < numMonths; i++) {     
            cout << "Enter earnings for month " << i+1 << ": ";
            cin >> earnings[i];
            totalEarnings += earnings[i];       
            
           
            if(earnings[i] > earnings[highestMonth]) { 
                highestMonth = i;                
            }
        }
        
        float average = totalEarnings / numMonths;
       
        cout << "\n--- Analysis for " << name << " ---\n";
        cout << "Total Earnings: " << totalEarnings << endl;
        cout << "Average Monthly Earning: " << average << endl;
        cout << "Highest Earning Month: Month " << highestMonth + 1 
             << " (" << earnings[highestMonth] << ")\n";
    }

    void releaseMemory() {                       
        delete[] earnings;                      
    }
};

int main() {
    Employee emp;                                
    emp.acceptDetails();                       
    emp.processEarnings();                       
    emp.releaseMemory();                         
    return 0;
}