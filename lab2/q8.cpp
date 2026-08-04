//Q.8. LIBRARY BOOK MANAGEMENT SYSTEM
#include <iostream>
#include <string>
using namespace std;

// Template to track library book borrowing
class LibraryBook {
private:
    int bookID;
    string bookTitle;
    string studentName;
    int daysIssued;
    double fine;

public:
    // Record who borrowed the book and for how long
    void enterDetails() {
        cout << "Enter Book ID: ";
        cin >> bookID;
        cin.ignore();
        cout << "Enter Book Title: ";
        getline(cin, bookTitle);
        cout << "Enter Student Name: ";
        getline(cin, studentName);
        cout << "Enter Number of Days Issued: ";
        cin >> daysIssued;
    }

    // Rule: First 15 days free! After that pay ₹2 per late day.
    void calculateFine() {
        if (daysIssued > 15) {
            fine = (daysIssued - 15) * 2; // Pay 2 rupees for each day beyond 15
        } else {
            fine = 0.0; // Returned on time, zero fine!
        }
    }

    // Print receipt
    void displayTransaction() {
        cout << "\n--- Library Transaction Record ---" << endl;
        cout << "Book ID       : " << bookID << endl;
        cout << "Book Title    : " << bookTitle << endl;
        cout << "Student Name  : " << studentName << endl;
        cout << "Days Issued   : " << daysIssued << endl;
        cout << "Fine Applicable: ₹" << fine << endl;
    }
};

int main() {
    LibraryBook book;
    book.enterDetails();
    book.calculateFine();
    book.displayTransaction();
    return 0;
}