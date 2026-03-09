#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string name;
    int rollNumber;
    float marks;
    char grade;

public:
    void setName(string n) {
        name = n;
    }

    string getName() {
        return name;
    }

    void setRollNumber(int r) {
        rollNumber = r;
    }

    int getRollNumber() {
        return rollNumber;
    }

    void setMarks(float m) {
        marks = m;
    }

    float getMarks() {
        return marks;
    }

    void setGrade(char g) {
        grade = g;
    }

    char getGrade() {
        return grade;
    }

    void calculateGrade() {
        if (marks >= 90 && marks <= 100) {
            grade = 'A';
        } else if (marks >= 80 && marks < 90) {
            grade = 'B';
        } else if (marks >= 70 && marks < 80) {
            grade = 'C';
        } else if (marks >= 60 && marks < 70) {
            grade = 'D';
        } else {
            grade = 'F';
        }
    }
};

int main() {
    Student s;
    int choice;
    string n;
    int r;
    float m;

    do {
        cout << "\n1. Accept Information" << endl;
        cout << "2. Display Information" << endl;
        cout << "3. Calculate Grade" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter Name: ";
            cin >> n;
            s.setName(n);
            cout << "Enter Roll Number: ";
            cin >> r;
            s.setRollNumber(r);
            cout << "Enter Marks: ";
            cin >> m;
            s.setMarks(m);
        } else if (choice == 2) {
            cout << "Name: " << s.getName() << endl;
            cout << "Roll Number: " << s.getRollNumber() << endl;
            cout << "Marks: " << s.getMarks() << endl;
            cout << "Grade: " << s.getGrade() << endl;
        } else if (choice == 3) {
            s.calculateGrade();
            cout << "Grade Calculated: " << s.getGrade() << endl;
        }

    } while (choice != 4);

    return 0;
}