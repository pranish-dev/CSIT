#include<stdio.h>
void matrixsum(int r, int c){
    int i, j;
    int max1[r][c], max2[r][c], sum[r][c];

    printf("Enter the elements of the first matrix:\n");
    for(i = 0; i < r; i++){
        for(j = 0; j < c; j++){
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &max1[i][j]);
        }
    }
    printf("Enter the elements of the second matrix:\n");
    for(i = 0; i < r; i++){
        for(j = 0; j < c; j++){
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &max2[i][j]);
        }
    }
    for(i = 0; i < r; i++){
        for(j = 0; j < c; j++){
            sum[i][j] = max1[i][j] + max2[i][j];
        }
    }
    printf("\nSum of the two matrices:\n");
    for(i = 0; i < r; i++){
        for(j = 0; j < c; j++){
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int r, c, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);
    matrixsum(r, c);
    return 0;
}