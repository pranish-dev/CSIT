#include<stdio.h>
int main (){
    int n,temp,rev=0,check;
    printf("Enter a number: ");
    scanf("%d",&n);
    check=n;
    while (n>0){
        temp=n%10;
        rev=rev*10+temp;
        n=n/10;
    }
    if (check==rev){
        printf("The number %d is a palindrome.", check);
    }
    else{
        printf("The number %d is not a palindrome.", check);
    }
    return 0;
}