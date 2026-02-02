#include<stdio.h>
int main (){
    int n,fibo;
    printf("Enter a number: ");
    scanf("%d",&n);
    for (int i =0; i<n; i++){
        if (i==0){
            fibo=0;
        } else if (i==1){
            fibo=1;
        } else {
            int a=0, b=1, c;
            for (int j=2; j<=i; j++){
                c=a+b;
                a=b;
                b=c;
            }
            fibo=b;
        }
        printf("%d ",fibo);
    }
    return 0;
}