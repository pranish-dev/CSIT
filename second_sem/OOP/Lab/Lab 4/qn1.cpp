#include<iostream>
using namespace std;
class Distance{
    private:
        int feet;
        float inches;
    public:
        Distance(float f){
            feet=int(f);
            inches=(f-feet)*12;
        }
        void displayDistance(){
            cout<<"Distance: "<<feet<<"'"<<inches<<"\""<<endl;
        }
};
int main(){
    float f;
    cout<<"Enter distance in feet: ";
    cin>>f;
    Distance d(f);
    d.displayDistance();
    return 0;
}