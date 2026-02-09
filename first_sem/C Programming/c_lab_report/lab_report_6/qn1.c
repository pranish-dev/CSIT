#include<stdio.h>
#include<string.h>
int main (){
    char a[20],copied[20],cat[20],concated[40],temp[20];
    int len;
    printf("Enter a String:");
    gets(a);
    strcpy(temp,a);
    len=strlen(a);
    printf("length of %s is %d",a,len);
    strcpy(copied,a);
    printf("\ncopied string is %s",copied);
    printf("\nEnter another string to Concat:");
    gets(cat);
    strcat(a,cat);
    printf("\nconcated string is %s",a);
    printf("\n%d",strcmp(temp,copied));

    strlwr(a);
    printf("\nLower Cased String is %s",a);
    strupr(a);
    printf("\nUpper Cased String is %s",a);
    strrev(a);
    printf("\nReversed String is %s",a);
    return 0;

}