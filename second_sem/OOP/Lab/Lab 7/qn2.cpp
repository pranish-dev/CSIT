#include <iostream>
using namespace std;

template <typename T>
class Pair
{
private:
    T first;
    T second;

public:
    Pair(T a, T b)
    {
        first = a;
        second = b;
    }

    T sum()
    {
        return first + second;
    }

    T difference()
    {
        return first - second;
    }

    void display()
    {
        cout << "First value: " << first << endl;
        cout << "Second value: " << second << endl;
        cout << "Sum: " << sum() << endl;
        cout << "Difference: " << difference() << endl;
    }
};

int main()
{
    Pair<int> p1(10, 5);
    Pair<float> p2(12.5f, 3.2f);

    cout << "For integer pair:" << endl;
    p1.display();

    cout << "\nFor float pair:" << endl;
    p2.display();

    return 0;
}
