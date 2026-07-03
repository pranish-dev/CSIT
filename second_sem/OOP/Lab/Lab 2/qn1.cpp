#include<iostream>
using namespace std;
class Student{
    private:
        int rollno;
        float marks[4];
        string name,grade;
        float total=0.0,percentage;
    public:
        Student(int r, float m[], string n){
            rollno = r;
            for(int i=0; i<=4; i++){
                marks[i] = m[i];
            }
            name = n;
        }
        void calculateResult(){
            for(int i=0;i<=4;i++){
                total+=marks[i];
            }
            percentage = total/5;
            if(percentage>=90)
                grade = "A";
            else if(percentage>=75)
                grade = "B";
            else if(percentage>=60)
                grade = "C";
            else if(percentage>=40)
                grade = "D";
            else
                grade = "F";

        }
        void displayResult(){
            cout<<"Roll No: "<<rollno<<endl;
            cout<<"Name: "<<name<<endl;
            for(int i=0;i<=4;i++){
                cout<<"Marks in Subject "<<i+1<<": "<<marks[i]<<endl;
            }
            cout<<"Total Marks: "<<total<<endl;
            cout<<"Percentage: "<<percentage<<endl;
            cout<<"Grade: "<<grade<<endl;
        }
};
int main(){
    int rollno;
    float marks[5];
    string name;
    cout<<"Enter Roll No: ";
    cin>>rollno;
    cout<<"Enter Name: ";
    cin>>name;
    cout<<"Enter Marks in 5 subjects"<<endl;
    for(int i=0;i<=4;i++){
        cout<<"Mark for Subject "<<i+1<<": ";
        cin>>marks[i];
    }
    Student s(rollno, marks, name);
    s.calculateResult();
    s.displayResult();
    return 0;
}