#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    int empId;
    string name;
    float basicSalary;

public:
    void getEmployee() {
        cout << "Enter Employee ID: ";
        cin >> empId;
        cin.ignore();
        cout << "Enter Employee Name: ";
        getline(cin, name);
        cout << "Enter Basic Salary: ";
        cin >> basicSalary;
    }
};

class Salary : public Employee {
    float hra, da, bonus, grossSalary, tax, netSalary;

public:
    void calculateSalary() {
        hra = 0.20 * basicSalary;
        da = 0.10 * basicSalary;
        bonus = 0.05 * basicSalary;
        grossSalary = basicSalary + hra + da + bonus;
        tax = 0.03 * grossSalary;
        netSalary = grossSalary - tax;
    }

    void display() {
        cout << "\nEmployee Details\n";
        cout << "Employee ID: " << empId << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "HRA: " << hra << endl;
        cout << "DA: " << da << endl;
        cout << "Bonus: " << bonus << endl;
        cout << "Gross Salary: " << grossSalary << endl;
        cout << "Tax Deduction: " << tax << endl;
        cout << "Net Salary: " << netSalary << endl;
    }
};

int main() {
    Salary s;
    s.getEmployee();
    s.calculateSalary();
    s.display();
    return 0;
}