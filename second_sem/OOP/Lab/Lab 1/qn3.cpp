#include<iostream>
using namespace std;
class CalArea{
    private:
    double l,b,base,h;
    public:
    inline double area(double side){
        l=side;
        return l*l;
    }
    double area(double l,double b){
        this->l=l;
        this->b=b;
        return this->l * this->b;
    }
    double area(double base, double height, double factor){
        this->base = base;
        this->h = height;
        return factor *this->base * this->h;
    }
};
int main(){
    int choice;
    double l,b,h,base;
    CalArea a1;
    cout<<"1. Area of square\n2. Area of rectangle\n3. Area of triangle\nEnter your choice: ";
    cin>>choice;
    switch (choice)
    {
    case 1:
        cout<<"Enter the length of the side: ";
        cin>>l;
        cout<<"Area of square: "<<a1.area(l)<<endl;
        break;
    case 2:
        cout<<"Enter the length and breadth: ";
        cin>>l>>b;
        cout<<"Area of rectangle: "<<a1.area(l,b)<<endl;
        break;
    case 3:
        cout<<"Enter the base and height: ";
        cin>>base>>h;
        cout<<"Area of triangle: "<<a1.area(base,h,0.5)<<endl;
        break;
    
    default:
        cout<<"Invalid choice!"<<endl;
        break;
    }
    return 0;
}
