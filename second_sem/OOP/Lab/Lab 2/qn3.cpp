#include <iostream>
using namespace std;
class Room
{
private:
    float length, breadth, height;
public:
    Room()
    {
        length = 0;
        breadth = 0;
        height = 0;
    }
    Room(float l, float b, float h)
    {
        length = l;
        breadth = b;
        height = h;
    }
    Room(const Room &r)
    {
        length = r.length;
        breadth = r.breadth;
        height = r.height;
    }
    float calculateArea()
    {
        return length * breadth;
    }
    float calculateVolume()
    {
        return length * breadth * height;
    }
    void display()
    {
        cout << "\nRoom Dimensions\n";
        cout << "Length     : " << length << endl;
        cout << "Breadth    : " << breadth << endl;
        cout << "Height     : " << height << endl;
        cout << "Floor Area : " << calculateArea() << endl;
        cout << "Volume     : " << calculateVolume() << endl;
    }
};
 
int main()
{
    Room r1;
    float l, b, h;
    cout << "Enter Length, Breadth and Height: ";
    cin >> l >> b >> h;
    Room r2(l, b, h);
    Room r3(r2);
    cout << "Default Constructor Object:";
    r1.display();
    cout << "\nParameterized Constructor Object:";
    r2.display();
    cout << "\nCopy Constructor Object:";
    r3.display();
    return 0;
}