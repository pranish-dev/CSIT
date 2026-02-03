#include<stdio.h>
int main (){
    int usr;
    printf("Enter N numbers: ");
    scanf("%d",&usr);
    int n[usr],i,largest;
    for(i=0;i<usr;i++){
        printf("Enter number %d: ",i+1);
        scanf("%d",&n[i]);
        if(i==0){
            largest=n[i];
        }
        else if(n[i]>largest){
            largest=n[i];
        }
    }
    printf("Largest number = %d\n", largest);
    return 0;
}