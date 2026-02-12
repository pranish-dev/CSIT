#include<stdio.h>
int main(){
    char str[20];
    int len=0,i=0;
    printf("Enter String:");
    scanf("%s",str);
    while(str[len]!='\0'){
        len++;
    }
    printf("Length of %s is %d",str,len);
    return 0;
}