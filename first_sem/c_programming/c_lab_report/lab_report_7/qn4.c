#include<stdio.h>
int rev(int n){
    int temp,rev=0;
    while(n>0){
        temp=n%10;
        rev=rev*10+temp;
        n=n/10;
    }
    return rev;
}
int main (){
    int n,reverse;
    printf("Enter number:");
    scanf("%d",&n);
    printf("Reverse of %d is %d\n",n,rev(n));
    return 0;
}