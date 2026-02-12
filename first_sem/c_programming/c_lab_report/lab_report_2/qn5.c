#include<stdio.h>
int main (){
    int n;
    printf("Enter Number:");
    scanf("%d",&n);
    if(n%2==0 && n!=0){
        printf("%d is Even",n);
    }
    else if(n%2!=0){
        printf("%d is Odd",n);
    }
    else
        printf("The given number is neither odd nor even. It is 0");
    return 0;
}