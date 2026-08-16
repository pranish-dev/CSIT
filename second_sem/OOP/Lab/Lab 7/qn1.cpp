#include <iostream>
using namespace std;

template <typename T>
T Largest(T a, T b)
{
    return (a > b) ? a : b;
}

int main()
{
    int i1 = 10, i2 = 25;
    float f1 = 4.5f, f2 = 7.2f;
    char c1 = 'A', c2 = 'a';

    cout << "Larger integer: " << Largest(i1, i2) << endl;
    cout << "Larger float: " << Largest(f1, f2) << endl;
    cout << "Larger character: " << Largest(c1, c2) << endl;

    return 0;
}
