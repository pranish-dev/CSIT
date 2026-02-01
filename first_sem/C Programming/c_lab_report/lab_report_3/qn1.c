#include<stdio.h>
int main (){
    int n;
    printf("Enter Number:");
    scanf("%d",&n);
    if (n>0){
        printf("%d is positive.",n);
    }
    else if(n<0){
        printf("%d is negative.",n);
    }
    else
        printf("0 is neither negative nor positive.\n");
    return 0;
}