//q10.Shopping Cart Calculator

#include <iostream>
using namespace std;

class Product
{
    string name;
    float price;
    int quantity;

public:
    Product(string n = "", float p = 0, int q = 0)
    {
        name = n;
        price = p;
        quantity = q;
    }
    Product operator+(Product p)
    {
        Product temp;
        if (name == p.name && price == p.price)
        {
            temp.name = name;
            temp.price = price;
            temp.quantity = quantity + p.quantity;
        }
        else
        {
            cout << "Products are different. Cannot combine." << endl;
            temp = *this;
        }
        return temp;
    }
    bool operator>(Product p)
    {
        return (price * quantity) > (p.price * p.quantity);
    }
    void display()
    {
        cout << "Product: " << name << endl;
        cout << "Price: " << price << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Total Value: " << price * quantity << endl;
    }
};

int main()
{
    Product p1("Book", 200, 2);
    Product p2("Book", 200, 3);
    Product p3 = p1 + p2;
    cout << "Combined Product:" << endl;
    p3.display();
    cout << endl;
    if (p1 > p2)
        cout << "Product 1 has greater total value.";
    else if (p2 > p1)
        cout << "Product 2 has greater total value.";
    else
        cout << "Both products have equal total value.";
    return 0;
}