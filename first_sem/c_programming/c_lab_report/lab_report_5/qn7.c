#include <stdio.h>

int main() {
    int m, n, p, q;
    printf("Enter order of first matrix (rows columns): ");
    scanf("%d %d", &m, &n);
    printf("Enter order of second matrix (rows columns): ");
    scanf("%d %d", &p, &q);
    
    if(n != p) {
        printf("Matrix multiplication not possible. Columns of first matrix must equal rows of second matrix.\n");
        return 1;
    }
    
    int A[m][n], B[p][q], C[m][q];
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            printf("Enter element of first matrix row %d and column %d: ",i+1,j+1);
            scanf("%d", &A[i][j]);
        }
    }
    for(int i = 0; i < p; i++) {
        for(int j = 0; j < q; j++) {
            printf("Enter element of second matrix row %d and column %d: ",i+1,j+1);
            scanf("%d", &B[i][j]);
        }
    }
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < q; j++) {
            C[i][j] = 0;
            for(int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    printf("Multiplication matrix:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < q; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}
