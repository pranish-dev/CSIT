#include<stdio.h>
int main (){
    int *a[6],n[5],sum=0;
    for(int i=0;i<5;i++){
        printf("Enter %d number:",i+1);
        scanf("%d",&n[i]);
        a[i]=&n[i];
    }
    for ( int i = 0; i < 5; i++)
    {
        sum=sum+*a[i];
    }
    printf("Sum is %d",sum);
    return 0;
}