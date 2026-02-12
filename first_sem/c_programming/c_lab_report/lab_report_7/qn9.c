#include<stdio.h>
int sum(int n){
    int sum = 0;
    while(n != 0){
        sum =sum + n % 10;
        n =n/10;
    }
    return sum;
}
int main(){
    int digit;
    printf("Enter a number: ");
    scanf("%d", &digit);
    printf("The sum of digits of the number %d is %d\n", digit, sum(digit));
    return 0;
}