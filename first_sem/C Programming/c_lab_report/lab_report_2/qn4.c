#include<stdio.h>
int main (){
    int n1,n2;
    printf("Enter two numbers:");
    scanf("%d%d",&n1,&n2);
    if (n1>n2){
        printf("%d is larger than %d",n1,n2);
    }
    else if (n2>n1){
        printf("%d is larger than %d",n2,n1);
    }
    else
        printf("%d and %d are equal",n1,n2);
    return 0;
}