//q.10. Smart Home Device

#include <iostream>
#include <string>
using namespace std;

class SmartDevice {
private:
    string deviceName;
    string deviceType;
    bool powerStatus;

public:
    SmartDevice(string name, string type, bool status) {
        deviceName = name;
        deviceType = type;
        powerStatus = status;
    }

    friend class HomeController;
};

class HomeController {
public:
    void displayDeviceInfo(SmartDevice d) {
        cout << "Device Name: " << d.deviceName << endl;
        cout << "Device Type: " << d.deviceType << endl;
    }

    void turnOn(SmartDevice &d) {
        d.powerStatus = true;
        cout << "Device turned ON." << endl;
    }

    void turnOff(SmartDevice &d) {
        d.powerStatus = false;
        cout << "Device turned OFF." << endl;
    }

    void displayPowerStatus(SmartDevice d) {
        if (d.powerStatus)
            cout << "Power Status: ON" << endl;
        else
            cout << "Power Status: OFF" << endl;
    }
};

int main() {
    SmartDevice device("Smart Bulb", "Lighting", false);

    HomeController controller;

    controller.displayDeviceInfo(device);

    cout << endl;
    controller.displayPowerStatus(device);

    cout << endl;
    controller.turnOn(device);

    controller.displayPowerStatus(device);

    cout << endl;
    controller.turnOff(device);

    controller.displayPowerStatus(device);

    return 0;
}