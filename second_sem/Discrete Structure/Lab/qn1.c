#include <stdio.h>

int main() {
    int A[100], B[100], U[200];
    int m, n, i, j, k = 0, found;

    printf("Enter number of elements in Set A: ");
    scanf("%d", &m);

    printf("Enter elements of Set A: ");
    for(i = 0; i < m; i++)
        scanf("%d", &A[i]);

    printf("Enter number of elements in Set B: ");
    scanf("%d", &n);

    printf("Enter elements of Set B: ");
    for(i = 0; i < n; i++)
        scanf("%d", &B[i]);

    for(i = 0; i < m; i++)
        U[k++] = A[i];

    for(i = 0; i < n; i++) {
        found = 0;
        for(j = 0; j < m; j++) {
            if(B[i] == A[j]) {
                found = 1;
                break;
            }
        }
        if(!found)
            U[k++] = B[i];
    }

    printf("\nUnion: ");
    for(i = 0; i < k; i++)
        printf("%d ", U[i]);

    printf("\nIntersection: ");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            if(A[i] == B[j]) {
                printf("%d ", A[i]);
                break;
            }
        }
    }

    printf("\nDifference (A - B): ");
    for(i = 0; i < m; i++) {
        found = 0;
        for(j = 0; j < n; j++) {
            if(A[i] == B[j]) {
                found = 1;
                break;
            }
        }
        if(!found)
            printf("%d ", A[i]);
    }

    printf("\nCartesian Product:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            printf("(%d,%d)\n", A[i], B[j]);
        }
    }

    return 0;
}