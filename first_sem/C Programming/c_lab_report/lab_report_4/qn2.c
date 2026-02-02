#include<stdio.h>
int main(){
    int n,sum=0,temp=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    while (n>0)
    {
        temp=n%10;
        sum=sum+temp;
        n=n/10;
    }

    printf("Sum of digits is: %d", sum);
    return 0;
}