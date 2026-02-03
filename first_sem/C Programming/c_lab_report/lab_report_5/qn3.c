#include<stdio.h>
int main(){
    int usr, i, j, temp;
    printf("Enter how many numbers: ");    
    scanf("%d", &usr);
    int n[usr];
    for(i = 0; i < usr; i++){
        printf("Enter number %d: ", i + 1);
        scanf("%d", &n[i]);
    }
    for(i = 0; i < usr - 1; i++){
        for(j = 0; j < usr - i - 1; j++){
            if(n[j] > n[j + 1]){
                temp = n[j];
                n[j] = n[j + 1];
                n[j + 1] = temp;
            }
        }
    }
    printf("\nNumbers in ascending order:\n");
    for(i = 0; i < usr; i++){
        printf("%d ", n[i]);
    }
    printf("\n");
    
    return 0;
}