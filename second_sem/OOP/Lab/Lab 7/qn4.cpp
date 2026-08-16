#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter total number of subjects: ";
    cin >> n;

    int marks;

    for (int i = 1; i <= n; i++)
    {
        cout << "Enter marks for subject " << i << ": ";
        cin >> marks;

        try
        {
            if (marks < 0 || marks > 100)
            {
                throw "Marks should be between 0 and 100.";
            }

            cout << "Subject " << i << " marks are valid: " << marks << endl;
        }
        catch (const char *msg)
        {
            cout << "Error for subject " << i << ": " << msg << endl;
        }
    }

    return 0;
}
