#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Employee
{
private:
    int empId;
    char name[30];
    float salary;

public:
    void getData()
    {
        cout << "Enter employee ID: ";
        cin >> empId;
        cout << "Enter employee name: ";
        cin >> name;
        cout << "Enter salary: ";
        cin >> salary;
    }

    void displayEmployee()
    {
        cout << "Employee ID: " << empId << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }

    friend ostream &operator<<(ostream &out, Employee &e);
    friend istream &operator>>(istream &in, Employee &e);
};

ostream &operator<<(ostream &out, Employee &e)
{
    out << e.empId << " " << e.name << " " << e.salary << endl;
    return out;
}

istream &operator>>(istream &in, Employee &e)
{
    in >> e.empId >> e.name >> e.salary;
    return in;
}

int main()
{
    int n;
    cout << "How many employees do you want to add? ";
    cin >> n;

    Employee emp;
    ofstream outFile("employee.dat", ios::binary | ios::app);
    if (!outFile)
    {
        cout << "Error opening file for writing." << endl;
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        emp.getData();
        outFile.write((char *)&emp, sizeof(emp));
    }
    outFile.close();

    ifstream inFile("employee.dat", ios::binary);
    if (!inFile)
    {
        cout << "Error opening file for reading." << endl;
        return 1;
    }

    cout << "\nEmployee records in employee.dat:" << endl;
    while (inFile.read((char *)&emp, sizeof(emp)))
    {
        emp.displayEmployee();
        cout << "---------------------" << endl;
    }
    inFile.close();

    return 0;
}
