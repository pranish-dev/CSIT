#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Student
{
private:
    string name;
    int roll;
    float marks;

public:
    void getData()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> roll;
        cout << "Enter marks: ";
        cin >> marks;
    }

    void putData()
    {
        cout << name << "\t" << roll << "\t" << marks << endl;
    }

    friend ofstream &operator<<(ofstream &out, Student &s);
    friend ifstream &operator>>(ifstream &in, Student &s);
};

ofstream &operator<<(ofstream &out, Student &s)
{
    out << s.name << " " << s.roll << " " << s.marks << endl;
    return out;
}

ifstream &operator>>(ifstream &in, Student &s)
{
    in >> s.name >> s.roll >> s.marks;
    return in;
}

int main()
{
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    Student s[n];

    ofstream outFile("students.txt");
    if (!outFile)
    {
        cout << "Error opening file for writing." << endl;
        return 1;
    }

    cout << "Enter details of " << n << " students:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Student " << i + 1 << endl;
        s[i].getData();
        outFile << s[i];
    }
    outFile.close();

    ifstream inFile("students.txt");
    if (!inFile)
    {
        cout << "Error opening file for reading." << endl;
        return 1;
    }

    cout << "\nContents of students.txt:" << endl;
    while (inFile >> s[0])
    {
        s[0].putData();
    }
    inFile.close();

    return 0;
}