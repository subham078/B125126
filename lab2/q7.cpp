//Q7.PROJECT INVENTORY MANAGEMENT
#include <iostream>
#include <string>
using namespace std;

// Template for items inside a store
class Product {
private:
    int productID;
    string productName;
    int quantity;        // How many items left on the shelf
    double pricePerUnit; // Price for 1 item

public:
    // Setup shop items
    void acceptDetails() {
        cout << "Enter Product ID: ";
        cin >> productID;
        cin.ignore();
        cout << "Enter Product Name: ";
        getline(cin, productName);
        cout << "Enter Quantity Available: ";
        cin >> quantity;
        cout << "Enter Price Per Unit: ";
        cin >> pricePerUnit;
    }

    // Reduce items stock when customer buys them
    void sellUnits(int unitsSold) {
        if (unitsSold > quantity) {
            cout << "Sale Failed: Not enough stock available!" << endl;
        } else {
            quantity -= unitsSold; // Subtract sold items from inventory
            cout << "Successfully sold " << unitsSold << " units." << endl;
        }
    }

    // Multiply remaining items by single item price
    double calculateInventoryValue() {
        return quantity * pricePerUnit;
    }

    // Show inventory status
    void displayDetails() {
        cout << "\n--- Product Details ---" << endl;
        cout << "Product ID      : " << productID << endl;
        cout << "Product Name    : " << productName << endl;
        cout << "Quantity Stocked: " << quantity << endl;
        cout << "Price per Unit  : ₹" << pricePerUnit << endl;
        cout << "Total Inventory : ₹" << calculateInventoryValue() << endl;
    }
};

int main() {
    Product prod;
    prod.acceptDetails();
    prod.displayDetails();

    int sellQty;
    cout << "\nEnter quantity to sell: ";
    cin >> sellQty;
    prod.sellUnits(sellQty); // Sell requested amount

    prod.displayDetails(); // Check updated stock
    return 0;
}