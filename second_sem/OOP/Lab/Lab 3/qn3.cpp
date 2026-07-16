#include<iostream>
using namespace std;    
class Distance{
    
    private:
        int feet;
        float inches;
    public:
        Distance(){
            feet=0;
            inches=0.0;
        }
        Distance(int f,float i){
            feet=f;
            inches=i;
        }
        Distance operator+(Distance d2){
            Distance temp;
            temp.feet=feet+d2.feet;
            temp.inches=inches+d2.inches;
            if(temp.inches>=12.0){
                temp.inches-=12.0;
                temp.feet++;
            }
            return temp;
        }
        void displayDistance(){
            cout<<"Distance: "<<feet<<"'"<<inches<<"\""<<endl;
        }
};
int main(){
    int f1,f2;
    float i1,i2;
    cout<<"Enter feet and inches of first distance: ";
    cin>>f1>>i1;
    cout<<"Enter feet and inches of second distance: ";
    cin>>f2>>i2;
    Distance d1(f1,i1);
    Distance d2(f2,i2);
    Distance d3=d1+d2;
    cout<<"First ";
    d1.displayDistance();
    cout<<"Second ";
    d2.displayDistance();
    cout<<"Sum ";
    d3.displayDistance();
    return 0;
}