#include <stdio.h>

// Define structure
struct complex {
    float real;
    float imag;
};

int main() {
    struct complex c1, c2, sum, diff;

    // Input first complex number
    printf("Enter real and imaginary part of first complex number: ");
    scanf("%f %f", &c1.real, &c1.imag);

    // Input second complex number
    printf("Enter real and imaginary part of second complex number: ");
    scanf("%f %f", &c2.real, &c2.imag);

    // Addition
    sum.real = c1.real + c2.real;
    sum.imag = c1.imag + c2.imag;

    // Subtraction
    diff.real = c1.real - c2.real;
    diff.imag = c1.imag - c2.imag;

    // Display results
    printf("\nSum = %.2f + %.2fi", sum.real, sum.imag);
    printf("\nDifference = %.2f + %.2fi", diff.real, diff.imag);

    return 0;
}
