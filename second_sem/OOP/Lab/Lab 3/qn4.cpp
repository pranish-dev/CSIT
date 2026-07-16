#include<iostream>
using namespace std;
class Time{
    private:
        int hours;
        int minutes;
    public:
        Time(){
            hours=0;
            minutes=0;
        }
        Time(int h,int m){
            hours=h;
            minutes=m;
        }
        friend Time operator+(Time t1,Time t2);
        friend bool operator==(Time t1,Time t2);
        void displayTime(){
            cout<<"Time: "<<hours<<":"<<minutes<<endl;
        }
};
Time operator+(Time t1,Time t2){
    Time temp;
    temp.hours=t1.hours+t2.hours;
    temp.minutes=t1.minutes+t2.minutes;
    if(temp.minutes>=60){
        temp.minutes-=60;
        temp.hours++;
    }
    return temp;
}
bool operator==(Time t1,Time t2){
    return (t1.hours==t2.hours && t1.minutes==t2.minutes);
    }
int main(){
    int h1,m1,h2,m2;
    cout<<"Enter hours and minutes of first time: ";
    cin>>h1>>m1;
    cout<<"Enter hours and minutes of second time: ";
    cin>>h2>>m2;
    Time t1(h1,m1);
    Time t2(h2,m2);
    Time t3=t1+t2;
    cout<<"First ";
    t1.displayTime();
    cout<<"Second ";
    t2.displayTime();
    cout<<"Sum ";
    t3.displayTime();
    if(t1==t2)
        cout<<"Both times are equal."<<endl;
    else
        cout<<"Both times are not equal."<<endl;
    return 0;
}