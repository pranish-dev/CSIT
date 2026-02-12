#include<stdio.h>
#include<string.h>
int main (){
    int n,i,j;
    char word[20][20],temp[20];
    printf("Enter number of words:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter word %d:",i+1);
        scanf("%s",word[i]);    
    }
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (strcmp(word[i], word[j]) > 0) {
                strcpy(temp, word[i]);
                strcpy(word[i], word[j]);
                strcpy(word[j], temp);
            }
        }
    }
    printf("Sorted words:\n");
    for(i=0;i<n;i++){
        printf("%s\n",word[i]);
    }
    return 0;
}
