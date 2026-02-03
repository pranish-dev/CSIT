#include<stdio.h>
int main (){
    int usr;
    printf("Enter N numbers: ");
    scanf("%d",&usr);
    int n[usr],i,sum=0,avg=0;
    for(i=0;i<usr;i++){
        printf("Enter number %d: ",i+1);
        scanf("%d",&n[i]);
        sum=sum+n[i];
    }
    for(i=0;i<usr;i++){
        printf("Number %d = %d\n",i+1,n[i]);
    }
    avg=sum/usr;
    printf("Sum = %d\n", sum);
    printf("Average = %d\n", avg);
    return 0;
}