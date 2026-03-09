#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
    int empID;
    string empName;
    double empSalary;

public:
    void setEmpID(int id) {
        empID = id;
    }

    int getEmpID() {
        return empID;
    }

    void setEmpName(string name) {
        empName = name;
    }

    string getEmpName() {
        return empName;
    }

    void setEmpSalary(double salary) {
        empSalary = salary;
    }

    double getEmpSalary() {
        return empSalary;
    }

    double calculateGrossSalary() {
        double bonus = 0;
        if (empSalary <= 5000) {
            bonus = empSalary * 0.10;
        } else if (empSalary > 5000 && empSalary <= 10000) {
            bonus = empSalary * 0.15;
        } else if (empSalary > 10000) {
            bonus = empSalary * 0.20;
        }
        return empSalary + bonus;
    }

    void displayEmployeeDetails() {
        cout << "ID: " << empID << endl;
        cout << "Name: " << empName << endl;
        cout << "Base Salary: " << empSalary << endl;
        cout << "Gross Salary: " << calculateGrossSalary() << endl;
    }
};

int main() {
    Employee emp;
    int choice, id;
    string name;
    double salary;

    do {
        cout << "\n1. Add New Employee" << endl;
        cout << "2. Calculate & Display Gross Salary" << endl;
        cout << "3. Display All Details" << endl;
        cout << "4. Update Info" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter ID: ";
            cin >> id;
            emp.setEmpID(id);
            cout << "Enter Name: ";
            cin >> name;
            emp.setEmpName(name);
            cout << "Enter Salary: ";
            cin >> salary;
            emp.setEmpSalary(salary);
        } else if (choice == 2) {
            cout << "Gross Salary: " << emp.calculateGrossSalary() << endl;
        } else if (choice == 3) {
            emp.displayEmployeeDetails();
        } else if (choice == 4) {
            cout << "Update Name: ";
            cin >> name;
            emp.setEmpName(name);
            cout << "Update Salary: ";
            cin >> salary;
            emp.setEmpSalary(salary);
        }

    } while (choice != 5);

    return 0;
}