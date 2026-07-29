#include <stdio.h>

int main() {
    int P, Q;

    printf("Enter value of P (0 or 1): ");
    scanf("%d", &P);

    printf("Enter value of Q (0 or 1): ");
    scanf("%d", &Q);

    printf("\nP = %d\n", P);
    printf("Q = %d\n", Q);
    printf("!P = %d\n", !P);
    printf("!Q = %d\n", !Q);
    printf("P && Q = %d\n", P && Q);
    printf("P || Q = %d\n", P || Q);
    printf("P -> Q = %d\n", (!P) || Q);
    printf("P <-> Q = %d\n", P == Q);

    return 0;
}