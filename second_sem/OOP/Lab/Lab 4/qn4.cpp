#include<iostream>
using namespace std;
class Rupees{
    private:
        float amount;
    public:
        Rupees(float amt){
            amount=amt;
        }
        void displayRupees(){
            cout<<"Rs."<<amount<<endl;
        }
};
class Dollors{
    private:
        float amount;
    public:
        Dollors(float amt){
            amount=amt;
        }
        operator Rupees(){
            return Rupees(amount*135);
        }
};
int main(){
    float amount;
    cout<<"Enter amount in Dollors: ";
    cin>>amount;
    Dollors d(amount);
    Rupees r=d;
    r.displayRupees();
    return 0;
}