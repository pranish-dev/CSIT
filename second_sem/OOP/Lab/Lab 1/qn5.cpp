#include<iostream>  
using namespace std;
class OperateArray{
    private:
    int array[100],size,sum,max,min;
    public:
    void setArray(int s){
        size = s;
        for(int i=0; i<size; i++){
            cout<<"Element "<<i+1<<": ";
            cin>>array[i];
        }
    }
    void sumArray(){
        sum = 0;
        for(int i=0; i<size; i++){
            sum += array[i];
        }
        cout<<"Sum of the array elements: "<<sum<<endl;
    }
    void maxArray(){
        max = array[0];
        for(int i=1; i<size; i++){
            if(array[i] > max){
                max = array[i];
            }
        }
        cout<<"Maximum element in the array: "<<max<<endl;
    }
    void minArray(){
        min = array[0];
        for(int i=1; i<size; i++){
            if(array[i] < min){
                min = array[i];
            }
        }
        cout<<"Minimum element in the array: "<<min<<endl;
    }   
    void sortedCheck(){
        bool sorted = true;
        for(int i=0; i<size-1; i++){
            if(array[i] > array[i+1]){
                sorted = false;
                break;
            }
        }
        if(sorted){
            cout<<"The array is sorted in ascending order."<<endl;
        }else{
            cout<<"The array is not sorted in ascending order."<<endl;
        }
    }
};
int main(){
    int n;
    OperateArray obj;
    cout<<"Enter the size of the array: ";
    cin>>n;
    obj.setArray(n);
    obj.sumArray();
    obj.maxArray();
    obj.minArray();
    obj.sortedCheck();
    return 0;
}