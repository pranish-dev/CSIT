#include<iostream>
using namespace std;
class Employee{
    private:
        int empID;
        string name;
        double basicSalary,hra,tax,da,grossSalary,netSalary;
    public:
        Employee(int id,string name,double basic){
            empID=id;
            this->name=name;
            basicSalary=basic;
        }
        void calculateGrossSalary(){
            hra=.2*basicSalary;
            da=.1*basicSalary;
            grossSalary=basicSalary+hra+da;
            if(grossSalary>50000){
                tax=.1*grossSalary;
                netSalary=grossSalary-tax;
            }
            else{
                tax =0;
                netSalary=grossSalary;
            }
            }
        void displaySalarySlip(){
            cout<<"Employee ID:"<<empID<<endl;
            cout<<"Name:"<<name<<endl;
            cout<<"Basic Salary:"<<basicSalary<<endl;
            cout<<"HRA:"<<hra<<endl;
            cout<<"DA:"<<da<<endl;
            cout<<"Tax:"<<tax<<endl;
            cout<<"Gross Salary:"<<grossSalary<<endl;
            cout<<"Net Salary:"<<netSalary<<endl;
        }
};
int main(){
    int empID;
    string name;
    double basicSalary;
    cout<<"Enter Employee ID:";
    cin>>empID;
    cout<<"Enter Name:";
    cin>>name;
    cout<<"Basic Salary:";
    cin>>basicSalary;
    Employee e(empID, name, basicSalary);
    e.calculateGrossSalary();
    e.displaySalarySlip();
    return 0;
}
