#include<iostream>
using namespace std;
class ComplexNumber{
    private:
        double real,img;
    public:
        ComplexNumber(){
            real=0;
            img=0;
        }
        ComplexNumber(double r, double i){
            real=r;
            img=i;
        }
        ComplexNumber AddComplex(ComplexNumber c2){
           ComplexNumber temp;
           temp.real = real + c2.real;
           temp.img = img + c2.img;
           return temp;
        }
        ComplexNumber SubComplex(ComplexNumber c2){
           ComplexNumber temp; 
           temp.real = real - c2.real;
           temp.img = img - c2.img;
           return temp;
        }
         void displayComplex()
    {
        if (img >= 0)
            cout << real << " + " << img << "i";
        else
            cout << real << " - " << -img << "i";
    }
};

int main()
{   
    double real,img;
    cout<<"Enter real and imaginary part of first complex number:";
    cin>>real>>img;
    ComplexNumber c1(real, img);
    cout<<"Enter real and imaginary part of second complex number:";
    cin>>real>>img;
    ComplexNumber c2(real, img);

    ComplexNumber sum = c1.AddComplex(c2);
    ComplexNumber diff = c1.SubComplex(c2);

    cout << "First Complex Number: ";
    c1.displayComplex();

    cout << "\nSecond Complex Number: ";
    c2.displayComplex();

    cout << "\n\nSum: ";
    sum.displayComplex();

    cout << "\nDifference: ";
    diff.displayComplex();

    return 0;
}
