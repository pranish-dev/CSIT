#include<stdio.h>
int fact(int n);
int main(){
    int n,factor;
    printf("Enter Integer:");
    scanf("%d",&n);
    factor=fact(n);
    printf("The factorial of %d is %d\n",n,factor);
    return 0;
}
int fact(int n){
    int i,fact=1;
    for ( i = 1; i <= n; i++)
    {
        fact=fact*i;
    }
    return fact;
}