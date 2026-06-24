#include <iostream>
#include <iomanip>
using namespace std;

namespace Permanent
{
    void salary(float basic)
    {
        float allowance = basic * 0.20f;
        float deduction = basic * 0.10f;
        float netSalary = basic + allowance - deduction;

        cout << "\n";
        cout << setfill('=') << setw(50) << "" << endl;
        cout << setfill(' ') << setw(32) << "PERMANENT EMPLOYEE" << endl;
        cout << setfill('=') << setw(50) << "" << endl;

        cout << setfill(' ');
        cout << left << setw(25) << "Basic Salary"
             << right << setw(15) << fixed << setprecision(2)
             << basic << endl;

        cout << left << setw(25) << "HRA (20%)"
             << right << setw(15) << allowance << endl;

        cout << left << setw(25) << "Tax (10%)"
             << right << setw(15) << deduction << endl;

        cout << setfill('-') << setw(40) << "" << endl;
        cout << setfill(' ');

        cout << left << setw(25) << "Net Salary"
             << right << setw(15) << netSalary << endl;

        cout << setfill('=') << setw(50) << "" << endl;
    }
}

namespace Contract
{
    void salary(float basic)
    {
        float bonus = basic * 0.10f;
        float netSalary = basic + bonus;

        cout << "\n";
        cout << setfill('=') << setw(50) << "" << endl;
        cout << setfill(' ') << setw(31) << "CONTRACT EMPLOYEE" << endl;
        cout << setfill('=') << setw(50) << "" << endl;

        cout << setfill(' ');
        cout << left << setw(25) << "Basic Salary"
             << right << setw(15) << fixed << setprecision(2)
             << basic << endl;

        cout << left << setw(25) << "Allowance (10%)"
             << right << setw(15) << bonus << endl;

        cout << setfill('-') << setw(40) << "" << endl;
        cout << setfill(' ');

        cout << left << setw(25) << "Net Salary"
             << right << setw(15) << netSalary << endl;

        cout << setfill('=') << setw(50) << "" << endl;
    }
}

int main()
{
    int choice;
    float basic;

    cout << "1. Permanent Employee\n";
    cout << "2. Contract Employee\n";
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter basic salary: ";
    cin >> basic;

    switch (choice)
    {
        case 1:
            Permanent::salary(basic);
            break;

        case 2:
            Contract::salary(basic);
            break;

        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}