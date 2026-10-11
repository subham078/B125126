//q.3.Vehicle Rental — Multilevel Inheritance

#include <iostream>
#include <string>
using namespace std;

class Vehicle
{
protected:
    string registrationNumber;
    int rentalDays;

public:
    Vehicle(string reg, int days)
    {
        registrationNumber = reg;
        rentalDays = days;
    }
};

class Car : public Vehicle
{
protected:
    double dailyRate;

public:
    Car(string reg, int days, double rate)
        : Vehicle(reg, days)
    {
        dailyRate = rate;
    }
};

class LuxuryCar : public Car
{
private:
    double luxuryCharge;

public:
    LuxuryCar(string reg, int days, double rate, double charge)
        : Car(reg, days, rate)
    {
        luxuryCharge = charge;
    }

    void displayCost()
    {
        double totalCost =
            (dailyRate + luxuryCharge) * rentalDays;

        cout << "Registration Number: "
             << registrationNumber << endl;

        cout << "Rental Days: " << rentalDays << endl;
        cout << "Daily Rate: " << dailyRate << endl;
        cout << "Luxury Charge: " << luxuryCharge << endl;
        cout << "Total Rental Cost: " << totalCost << endl;
    }
};

int main()
{
    LuxuryCar car("OD02AB1234", 5, 2000, 500);

    car.displayCost();

    return 0;
}