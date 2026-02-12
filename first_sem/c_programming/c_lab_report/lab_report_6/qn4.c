#include<stdio.h>
int main (){
    char str[20],rev[20];
    int i=0,j;
    printf("Enter String:");
    scanf("%s",str);
    while(str[i]!='\0'){
        i++;
    }
    j=i-1;
    i=0;
    while(j>=0){
        rev[i]=str[j];
        i++;
        j--;
    }
    rev[i]='\0';
    printf("Reversed String: %s\n",rev);
    return 0;
}