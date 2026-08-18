//Q1. PERSONAL DIARY

#include <iostream>
#include <string>
using namespace std;

class Diary {
private:
    string ownerName;
    int numberOfEntries;
    string lastEntry;

public:
    Diary(string name, int entries, string entry) {
        ownerName = name;
        numberOfEntries = entries;
        lastEntry = entry;
    }

    friend void displayDiary(Diary d);
};

void displayDiary(Diary d) {
    cout << "Owner Name: " << d.ownerName << endl;
    cout << "Number of Entries: " << d.numberOfEntries << endl;
    cout << "Last Entry: " << d.lastEntry << endl;
}

int main() {
    Diary d("Subham", 15, "Completed OOP Lab");

    displayDiary(d);

    return 0;
}