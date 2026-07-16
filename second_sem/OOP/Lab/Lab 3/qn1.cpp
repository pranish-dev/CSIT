#include<iostream>
using namespace std;
class Counter{
    private:
        int count;
    public:
        Counter(int c=0){
            count=c;   
        }
        Counter operator++(){
            count++;
            return *this;
        }
        Counter operator++(int){
            Counter temp;
            temp.count=count++;
            return temp;
        }
        void displayCount(){
            cout<<"Count: "<<count<<endl;
        }
};
int main(){
    int n;
    cout<<"Enter initial count: ";
    cin>>n;
    Counter c(n);
    cout<<"Initial ";
    c.displayCount();
    ++c;
    cout<<"After Pre-increment of ";
    c.displayCount();
    c++;
    cout<<"After Post-increment of ";
    c.displayCount();
    return 0;
}