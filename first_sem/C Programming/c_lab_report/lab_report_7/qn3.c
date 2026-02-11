#include<stdio.h>
void max(){
    int n1,n2;
    printf("Enter Two numbers to compare:");
    scanf("%d%d",&n1,&n2);
    if (n1>n2)
    {
        printf("%d is greater than %d",n1,n2);
    }
    else if(n2>n1){
        printf("%d is greater than %d",n2,n1);
    }
    else
        printf("Both are equal");
}
int main (){
    max();
    return 0;
}