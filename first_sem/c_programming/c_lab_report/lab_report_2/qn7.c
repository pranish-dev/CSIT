#include<stdio.h>
int main(){
     int a;
    printf("Enter year:");
    scanf("%d",&a);
    if (a%400 == 0){
        printf("Leap Year");
        return 1;
    }
    if(a%4==0 && a%100!=0){
        printf("Leap Year");
    }
    else{
        printf("Not Leap Year");
    }
return 0;
}
