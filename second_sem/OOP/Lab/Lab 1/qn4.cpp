#include<iostream>
using namespace std;
class swapValue{
    public:
    void swapByValue(int a, int b){
        cout<<"Before swapping: a = "<<a<<" b = "<<b<<endl;
        int temp;
        temp = a;
        a = b;
        b = temp;
        cout<<"After swapping: a = "<<a<<" b = "<<b<<endl;
    }
    void swapByPointer(int *a, int *b){
        cout<<"Before swapping: a = "<<*a<<" b = "<<*b<<endl;
        int temp;
        temp = *a;
        *a = *b;
        *b = temp;
        cout<<"After swapping: a = "<<*a<<" b = "<<*b<<endl;
    }
    void swapByReference(int &a, int &b){
        cout<<"Before swapping: a = "<<a<<" b = "<<b<<endl;
        int temp;
        temp = a;
        a = b;
        b = temp;
        cout<<"After swapping: a = "<<a<<" b = "<<b<<endl;
    }
};
int main(){
    int a,b;
    swapValue s1;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"\nSwapping by value:"<<endl;
    s1.swapByValue(a,b);
    cout<<"\nSwapping by pointer:"<<endl;
    s1.swapByPointer(&a,&b);
    cout<<"\nSwapping by reference:"<<endl;
    s1.swapByReference(a,b);
    return 0;
}