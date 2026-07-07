#include<iostream>
using namespace std;
class Counter{
    public:
        static int count;
        Counter(){
            count++;
            cout<<"Object Created!!!!!!!!!!!!"<<endl;
        }
        ~Counter(){
            count--;
            cout<<"Object Destroyed!!!!!!!!!!!!"<<endl;
        }
        static int getCount(){
            return count;
        }

};
int Counter :: count=0;
int main()
{
    cout << "Initial count = " << Counter::getCount() << endl;

    Counter obj1;
    cout << "Count after creating obj1 = " << Counter::getCount() << endl;

    Counter obj2;
    cout << "Count after creating obj2 = " << Counter::getCount() << endl;

    {
        Counter obj3;
        cout << "Count after creating obj3 = " << Counter::getCount() << endl;

        Counter obj4;
        cout << "Count after creating obj4 = " << Counter::getCount() << endl;
    }
    cout << "Count after inner scope ends = " << Counter::getCount() << endl;

    Counter obj5;
    cout << "Count after creating obj5 = " << Counter::getCount() << endl;

    return 0;
}