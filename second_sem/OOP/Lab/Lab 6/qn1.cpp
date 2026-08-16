#include <iostream>
using namespace std;

class Shape
{
public:
    virtual float area()
    {
        return 0;
    }
};

class Circle : public Shape
{
private:
    float radius;

public:
    Circle(float r)
    {
        radius = r;
    }
    float area()
    {
        return 3.1416 * radius * radius;
    }
};

class Rectangle : public Shape
{
private:
    float length, width;

public:
    Rectangle(float l, float w)
    {
        length = l;
        width = w;
    }

    float area()
    {
        return length * width;
    }
};

int main()
{   float radius,length,breadth;    
    cout<<"Enter radius, length, breadth:";
    cin>>radius>>length>>breadth;
    Circle c(radius);
    Rectangle r(length, breadth);
    Shape *ptr;

    ptr = &c;
    cout << "Area of Circle = " << ptr->area() << endl;

    ptr = &r;
    cout << "Area of Rectangle = " << ptr->area() << endl;

    return 0;
}