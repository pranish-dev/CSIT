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
    int choice;
    int a,b;
    swapValue s1;
    cout<<"1. Swap by value\n2. Swap by pointer\n3. Swap by reference\nEnter your choice: ";
    cin>>choice;
    switch (choice)
    {
    case 1:
        cout<<"Enter two numbers: ";
        cin>>a>>b;
        s1.swapByValue(a,b);
        break;
    case 2:
        cout<<"Enter two numbers: ";
        cin>>a>>b;
        s1.swapByPointer(&a,&b);
        break;
    case 3:
        cout<<"Enter two numbers: ";
        cin>>a>>b;
        s1.swapByReference(a,b);
        break;
    
    default:
        cout<<"Invalid choice!"<<endl;
        break;
    }
    return 0;
}