//q8.Inventory Combination

#include <iostream>
using namespace std;

class Item
{
    string name;
    float price;
    int quantity;
public:
    Item(string n = "", float p = 0, int q = 0)
    {
        name = n;
        price = p;
        quantity = q;
    }
    Item operator+(Item i)
    {
        Item temp;
        if (name == i.name && price == i.price)
        {
            temp.name = name;
            temp.price = price;
            temp.quantity = quantity + i.quantity;
        }
        else
        {
            cout << "Items are different. Cannot combine." << endl;
            temp = *this;
        }
        return temp;
    }

    void display()
    {
        cout << "Item: " << name << endl;
        cout << "Price: " << price << endl;
        cout << "Quantity: " << quantity << endl;
    }
};

int main()
{
    Item i1("Pen", 10, 5);
    Item i2("Pen", 10, 3);
    Item i3 = i1 + i2;
    cout << "Combined Item:" << endl;
    i3.display();
    return 0;
}