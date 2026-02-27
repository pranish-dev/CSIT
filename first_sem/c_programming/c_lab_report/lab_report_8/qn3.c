#include <stdio.h>

<<<<<<< HEAD
// Define structure
=======
>>>>>>> db2a9a8848f228bf3a23144a01e389277978e0ff
struct complex {
    float real;
    float imag;
};
<<<<<<< HEAD

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
=======
int main() {
    struct complex c1, c2, sum, diff;

    printf("Enter real and imaginary part of first complex number: ");
    scanf("%f %f", &c1.real, &c1.imag);

    printf("Enter real and imaginary part of second complex number: ");
    scanf("%f %f", &c2.real, &c2.imag);

    sum.real = c1.real + c2.real;
    sum.imag = c1.imag + c2.imag;

    diff.real = c1.real - c2.real;
    diff.imag = c1.imag - c2.imag;

    printf("\nSum = %.2f + %.2fi", sum.real, sum.imag);
    printf("\nDifference = %.2f + %.2fi\n", diff.real, diff.imag);
>>>>>>> db2a9a8848f228bf3a23144a01e389277978e0ff

    return 0;
}
