#include<iostream>
using namespace std;
class Kilometers{
    private:
        float km;
    public:
        Kilometers(float k){
            km=k;
        }
        void displayKilometers(){
            cout<<"kilometers:"<<km<<endl;
        }
        float getKM(){
            return km;
        }

};
class Miles{
    private:
        float miles;
    public:
        Miles(Kilometers k){
            miles=k.getKM()*0.621371;
        }
        void displayMiles(){
            cout<<"Miles:"<<miles<<endl;
        }
};
int main(){
    float km;
    cout<<"Enter distance in kilometers: ";
    cin>>km;
    Kilometers k(km);
    k.displayKilometers();
    Miles m=k;
    m.displayMiles();
    return 0;
}