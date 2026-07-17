#include<iostream>
using namespace std;
class Distance{
    private:
        int feet;
        float inches;
    public:
        Distance(int f, int i){
            feet=f;
            inches=i;
        }
        operator float(){
            return feet + inches/12.0;
        }
};
int main(){
    int f, i;
    cout<<"Enter distance in feet and inches: ";
    cin>>f>>i;
    Distance d(f, i);
    float totalDistance = d; // Implicit conversion to float
    cout<<"Total distance in feet: "<<totalDistance<<endl;
    return 0;
}