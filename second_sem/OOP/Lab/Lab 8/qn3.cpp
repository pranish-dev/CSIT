#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream file("numbers.dat", ios::in | ios::out | ios::binary | ios::trunc);
    if (!file)
    {
        cout << "Error opening file." << endl;
        return 1;
    }

    int numbers[5] = {10, 20, 30, 40, 50};

    for (int i = 0; i < 5; i++)
    {
        file.write((char *)&numbers[i], sizeof(int));
    }

    int pos;
    cout << "Enter record position to read/modify (0 to 4): ";
    cin >> pos;

    if (pos < 0 || pos >= 5)
    {
        cout << "Invalid position!" << endl;
        file.clear();
        return 1;
    }

    int value;
    file.seekg(pos * sizeof(int), ios::beg);
    file.read((char *)&value, sizeof(int));
    cout << "Value at position " << pos << " is: " << value << endl;

    int newValue;
    cout << "Enter new value: ";
    cin >> newValue;

    file.seekp(pos * sizeof(int), ios::beg);
    file.write((char *)&newValue, sizeof(int));
    file.flush();

    file.seekg(pos * sizeof(int), ios::beg);
    file.read((char *)&value, sizeof(int));
    cout << "Updated value at position " << pos << " is: " << value << endl;

    file.close();
    return 0;
}
