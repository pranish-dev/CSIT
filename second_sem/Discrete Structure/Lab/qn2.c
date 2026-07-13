#include <stdio.h>
#include <math.h>

int main() {
    double n;

    printf("Enter a number: ");
    scanf("%lf", &n);

    printf("Floor = %.0f\n", floor(n));
    printf("Ceiling = %.0f\n", ceil(n));

    return 0;
}