#include<iostream>
using namespace std;
class Calculator
{
 public:
  int divide(int a,int b)
  {
   if(b==0)
   throw 0;
   if(a<0||b<0)
   throw string("Negative no is not allowed.");
   return a/b;
   } 
};
int main()
{
 Calculator c;
 try
  {
   cout<<"divison of 30/6 is :"<<c.divide(30,6)<<endl;
  }
  catch(int)
  {
   cout<<"Error.Divison by zero."<<endl;
  }
  catch(string msg)
  {
   cout<<"Error:"<<msg<<endl;
  }
  try
  {
   cout<<"divison of 20/0 is :"<<c.divide(20,0)<<endl;
  }
  catch(int)
  {
   cout<<"Error:Divison by zero."<<endl;
  }
  catch(string msg)
  {
   cout<<"Error:"<<msg<<endl;
  }
  try
  {
   cout<<"divison of -5/6 is :"<<c.divide(-5,6)<<endl;
}
  catch(int)
  {
   cout<<"Error: Division by zero."<<endl;
  }
  catch(string msg)
  {
   cout<<"Error:"<<msg<<endl;
  }
  return 0;
}