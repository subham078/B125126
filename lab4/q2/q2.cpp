//Q2.MOBILE PHONE SETTINGS

#include <iostream>
#include <string>
using namespace std;

class Mobile {
private:
    string brand;
    string model;
    int batteryPercentage;

public:
    Mobile(string b, string m, int battery) {
        brand = b;
        model = m;
        batteryPercentage = battery;
    }

    friend void checkBattery(Mobile m);
};

void checkBattery(Mobile m) {
    cout << "Brand: " << m.brand << endl;
    cout << "Model: " << m.model << endl;
    cout << "Battery Percentage: " << m.batteryPercentage << "%" << endl;

    if (m.batteryPercentage < 20)
        cout << "Battery Low" << endl;
    else
        cout << "Battery Normal" << endl;
}

int main() {
    Mobile phone("Samsung", "Galaxy S24", 15);

    checkBattery(phone);

    return 0;
}