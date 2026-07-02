#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    int *marks = new int[n];

    for(int i = 0; i < n; i++) {
        cout << "Enter marks of student " << i + 1 << ": ";
        cin >> marks[i];
    }

    int higest = marks[0];
    int lowest = marks[0];
    int passed = 0;
    int sum = 0;

    for(int i = 0; i < n; i++) {
        if(marks[i] > higest)
            higest = marks[i];

        if(marks[i] < lowest)
            lowest = marks[i];

        if(marks[i] >= 40)
            passed++;

        sum += marks[i];
    }

    double average = (double)sum / n;

    cout << "Highest marks: " << higest << endl;
    cout << "Lowest marks: " << lowest << endl;
    cout << "Average marks: " << average << endl;
    cout << "Number of students passed: " << passed << endl;

    cout << "Do you want to add more students? (1 for yes, 0 for no): ";
    int choice;
    cin >> choice;

    if(choice == 1) {
        cout << "Enter number of students to add: ";
        int m;
        cin >> m;

        int *new_marks = new int[n + m];

        for(int i = 0; i < n; i++) {
            new_marks[i] = marks[i];
        }

        cout << "Enter marks of new students:\n";
        for(int i = n; i < n + m; i++) {
            cout << "Enter marks of student " << i + 1 << ": ";
            cin >> new_marks[i];
        }

        delete[] marks;
        marks = new_marks;
        n += m;

        higest = marks[0];
        lowest = marks[0];
        passed = 0;
        sum = 0;

        for(int i = 0; i < n; i++) {
            if(marks[i] > higest)
                higest = marks[i];

            if(marks[i] < lowest)
                lowest = marks[i];

            if(marks[i] >= 40)
                passed++;

            sum += marks[i];
        }

        average = (double)sum / n;

        cout << "Highest marks: " << higest << endl;
        cout << "Lowest marks: " << lowest << endl;
        cout << "Average marks: " << average << endl;
        cout << "Number of students passed: " << passed << endl;
    }

    delete[] marks;
    return 0;
}