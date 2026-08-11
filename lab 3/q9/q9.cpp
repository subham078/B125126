//Q.9.DYNAMIC SHOPING CART

#include <iostream>
using namespace std;

class Product {
private:    
    int productID;
    string productName;
    float price;
    int quantity;
public:
    void acceptDetails() {
        cout << "Enter Product ID: ";
        cin >> productID;
        cin.ignore();
        cout << "Enter Product Name: ";
        getline(cin, productName);
        cout << "Enter Price: ";
        cin >> price;
        cout << "Enter Quantity: ";
        cin >> quantity;
    }

    void displayDetails() {
        cout << "\n Product Details \n";
        cout << "Product ID   : " << productID << endl;
        cout << "Product Name : " << productName << endl;
        cout << "Price        : " << price << endl;
        cout << "Quantity     : " << quantity << endl;
    }
};

int main() {
    int n;
    cout << "Enter the number of products: ";
    cin >> n;

    Product *products = new Product[n];

    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for Product " << (i + 1) << ":\n";
        products[i].acceptDetails();
    }

    cout << "\nDisplaying Product Details:\n";
    for (int i = 0; i < n; i++) {
        products[i].displayDetails();
    }

    delete[] products;
    return 0;
}