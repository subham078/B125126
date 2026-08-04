//Q.9.STUDENT RESULT PROCESSING SYSTEM
#include <iostream>
#include <string>
using namespace std;

// Template to create school marksheets
class StudentResult {
private:
    string studentName;
    int rollNumber;
    float marks[5]; // Array storing marks of 5 subjects
    float totalMarks;
    float percentage;
    char grade;

public:
    // Collect student details and marks for 5 subjects
    void acceptDetails() {
        cout << "Enter Roll Number: ";
        cin >> rollNumber;
        cin.ignore();
        cout << "Enter Student Name: ";
        getline(cin, studentName);
        
        cout << "Enter Marks for 5 Subjects (out of 100):" << endl;
        for (int i = 0; i < 5; i++) { // Loop 5 times to take input
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }

    // Add up total, calculate percentage, and choose letter grade
    void processResult() {
        totalMarks = 0;
        for (int i = 0; i < 5; i++) {
            totalMarks += marks[i]; // Add each subject mark to total
        }
        
        percentage = (totalMarks / 500.0) * 100; // Calculate overall %

        // Grade ladder rule
        if (percentage >= 90) grade = 'A';
        else if (percentage >= 80) grade = 'B';
        else if (percentage >= 70) grade = 'C';
        else if (percentage >= 60) grade = 'D';
        else grade = 'F';
    }

    // Show report card
    void displayResult() {
        cout << "\n--- Student Report Card ---" << endl;
        cout << "Roll Number : " << rollNumber << endl;
        cout << "Student Name: " << studentName << endl;
        cout << "Total Marks : " << totalMarks << " / 500" << endl;
        cout << "Percentage  : " << percentage << "%" << endl;
        cout << "Grade       : " << grade << endl;
    }
};

int main() {
    StudentResult student;
    student.acceptDetails();
    student.processResult();
    student.displayResult();
    return 0;
}