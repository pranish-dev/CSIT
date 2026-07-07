#include<iostream>
using namespace std;
class Room{
    private:
        double length, breadth, height, area, volume;
    public:
        Room(){
            length=10.0;
            breadth=10.0;
            height=10.0;
        }
        Room(double l, double b, double h){
            length=l;
            breadth=b;
            height=h;
        }
        Room(const Room &r){
            length=r.length;
            breadth=r.breadth;
            height=r.height;
        }
        double calculateArea(){
            return length*breadth;
        }
        double calculateVolume(){
            return length*breadth*height;
        }
};
int main(){
    Room r1;
    cout<<"Area of Room 1: "<<r1.calculateArea()<<endl;
    cout<<"Volume of Room 1: "<<r1.calculateVolume()<<endl;

    double l, b, h;
    cout<<"Enter length, breadth and height of Room 2: ";
    cin>>l>>b>>h;
    Room r2(l, b, h);
    cout<<"Area of Room 2: "<<r2.calculateArea()<<endl;
    cout<<"Volume of Room 2: "<<r2.calculateVolume()<<endl;

    Room r3(r2);
    cout<<"Area of Room 3 (copy of Room 2): "<<r3.calculateArea()<<endl;
    cout<<"Volume of Room 3 (copy of Room 2): "<<r3.calculateVolume()<<endl;

    return 0;
}