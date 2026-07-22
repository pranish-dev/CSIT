#include <iostream>
#include <string>
using namespace std;

class Student {
protected:
    int id;
    string name;
    int semester;

public:
    Student(int i, string n, int s) {
        id = i;
        name = n;
        semester = s;
    }
};

class Marks : public Student {
protected:
    int m1, m2, m3, m4, m5;

public:
    Marks(int i, string n, int s, int a, int b, int c, int d, int e)
        : Student(i, n, s) {
        m1 = a;
        m2 = b;
        m3 = c;
        m4 = d;
        m5 = e;
    }
};

class Result : public Marks {
    int total;
    float percentage;
    string division;

public:
    Result(int i, string n, int s, int a, int b, int c, int d, int e)
        : Marks(i, n, s, a, b, c, d, e) {
        total = m1 + m2 + m3 + m4 + m5;
        percentage = total / 5.0;

        if (m1 < 32 || m2 < 32 || m3 < 32 || m4 < 32 || m5 < 32 || percentage < 32)
            division = "Fail";
        else if (percentage >= 80)
            division = "Distinction";
        else if (percentage >= 60)
            division = "First";
        else if (percentage >= 45)
            division = "Second";
        else
            division = "Pass";
    }

    void display() {
        cout << "Student ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Semester: " << semester << endl;
        cout << "Marks: " << m1 << " " << m2 << " " << m3 << " " << m4 << " " << m5 << endl;
        cout << "Total: " << total << endl;
        cout << "Percentage: " << percentage << "%" << endl;
        cout << "Division: " << division << endl;
    }
};

int main() {
    int id, sem, m1, m2, m3, m4, m5;
    string name;

    cout << "Enter Student ID: ";
    cin >> id;
    cin.ignore();

    cout << "Enter Name: ";
    getline(cin, name);

    cout << "Enter Semester: ";
    cin >> sem;

    cout << "Enter marks in 5 subjects: ";
    cin >> m1 >> m2 >> m3 >> m4 >> m5;

    Result r(id, name, sem, m1, m2, m3, m4, m5);
    r.display();

    return 0;
}