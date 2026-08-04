#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    int inches;

public:
    void inputDistance(int num) {
        cout << "Enter Distance " << num << " (Feet Inches): ";
        cin >> feet >> inches;
    }

    void addDistances(Distance d1, Distance d2) {
        inches = d1.inches + d2.inches;
        feet = d1.feet + d2.feet + (inches / 12);
        inches = inches % 12;
    }

    void displayDistance() {
        cout << feet << " ft " << inches << " in" << endl;
    }
};

int main() {
    Distance d1, d2, d3;

    d1.inputDistance(1);
    d2.inputDistance(2);

    d3.addDistances(d1, d2);

    cout << "\nTotal Distance: ";
    d3.displayDistance();

    return 0;
}