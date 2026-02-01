#include<stdio.h>
int main(){
    int user_input,hour,minute,second,temp;
    printf("Enter Seconds:");
    scanf("%d",&user_input);
    hour=user_input/3600;
    temp=user_input%3600;
    minute=temp/60;
    second=temp%60;
    printf("%d seconds is equal to %d hours %d minutes and %d seconds",user_input,hour,minute,second);
    return 0;
}