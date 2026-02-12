#include <stdio.h>

int main() {
    int m, n, p;
    printf("Enter order of first matrix (rows columns): ");
    scanf("%d %d", &m, &n);
    printf("Enter order of second matrix (rows columns): ");
    scanf("%d %d", &n, &p);
    int A[100][100], B[100][100], C[100][100];
    printf("Enter elements of first matrix:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter elements of second matrix:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < p; j++) {
            scanf("%d", &B[i][j]);
        }
    }
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < p; j++) {
            C[i][j] = 0;
            for(int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    printf("Resultant matrix:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < p; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}
