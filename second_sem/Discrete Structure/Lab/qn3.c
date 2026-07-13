#include <stdio.h>

int main() {
    int n, i;
    float A[100], B[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements values of Set A:\n");
    for(i = 0; i < n; i++)
        scanf("%f", &A[i]);

    printf("Enter elements values of Set B:\n");
    for(i = 0; i < n; i++)
        scanf("%f", &B[i]);

    printf("\nUnion:\n");
    for(i = 0; i < n; i++)
        printf("%.2f ", (A[i] > B[i]) ? A[i] : B[i]);

    printf("\n\nIntersection:\n");
    for(i = 0; i < n; i++)
        printf("%.2f ", (A[i] < B[i]) ? A[i] : B[i]);

    printf("\n\nComplement of Set A:\n");
    for(i = 0; i < n; i++)
        printf("%.2f ", 1 - A[i]);

    printf("\n");

        printf("\n\nComplement of Set B:\n");
    for(i = 0; i < n; i++)
        printf("%.2f ", 1 - B[i]);

    printf("\n");

    return 0;
}