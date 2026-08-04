#include <iostream>
using namespace std;

class Rectangle {
private:
    float length;
    float breadth;

public:
    void readDimensions() {
        cout << "Enter Length: ";
        cin >> length;
        cout << "Enter Breadth: ";
        cin >> breadth;
    }

    float calculateArea() {
        return length * breadth;
    }

    float calculatePerimeter() {
        return 2 * (length + breadth);
    }

    void displayResults() {
        cout << "\n--- Rectangle Results ---" << endl;
        cout << "Length    : " << length << endl;
        cout << "Breadth   : " << breadth << endl;
        cout << "Area      : " << calculateArea() << endl;
        cout << "Perimeter : " << calculatePerimeter() << endl;
    }
};

int main() {
    Rectangle rect;
    rect.readDimensions();
    rect.displayResults();
    return 0;
}