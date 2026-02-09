#include<stdio.h>
int main(){
    char str[20];
    int len=0,i=0;
    printf("Enter String:");
    scanf("%s",str);
    while(str[i]!='\0'){
        if (str[i]>='a' && str[i]<='z')
        {
           str[i]=str[i]-32;
        }
        i++;
    }
    printf("%s",str);
    return 0;
}