//Q10.ELECTRICITY BILL GENERATOR
#include <iostream>
#include <string>
using namespace std;

// Template for calculating electricity bills step-by-step
class ElectricityBill {
private:
    int consumerNumber;
    string consumerName;
    int unitsConsumed;
    double totalBill;

public:
    // Ask for customer details and total power units used
    void acceptDetails() {
        cout << "Enter Consumer Number: ";
        cin >> consumerNumber;
        cin.ignore();
        cout << "Enter Consumer Name: ";
        getline(cin, consumerName);
        cout << "Enter Units Consumed: ";
        cin >> unitsConsumed;
    }

    // Slab system rule calculation
    void calculateBill() {
        int units = unitsConsumed;
        totalBill = 0.0;

        if (units <= 100) {
            // Tier 1: First 100 units cost ₹5 each
            totalBill = units * 5;
        } else if (units <= 200) {
            // Tier 2: First 100 cost ₹5, remaining cost ₹7 each
            totalBill = (100 * 5) + ((units - 100) * 7);
        } else {
            // Tier 3: First 100 cost ₹5, next 100 cost ₹7, leftover cost ₹10 each
            totalBill = (100 * 5) + (100 * 7) + ((units - 200) * 10);
        }
    }

    // Print final electricity bill
    void displayBill() {
        cout << "\n--- Electricity Bill ---" << endl;
        cout << "Consumer Number : " << consumerNumber << endl;
        cout << "Consumer Name   : " << consumerName << endl;
        cout << "Units Consumed  : " << unitsConsumed << endl;
        cout << "Total Amount    : ₹" << totalBill << endl;
    }
};

int main() {
    ElectricityBill bill;
    bill.acceptDetails();
    bill.calculateBill();
    bill.displayBill();
    return 0;
}