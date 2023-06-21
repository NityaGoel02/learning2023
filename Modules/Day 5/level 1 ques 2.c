level 1 ques 2

#include <stdio.h>

// Structure to represent a complex number
struct Complex {
    float real;
    float imaginary;
};

// Function to read a complex number
struct Complex readComplex() {
    struct Complex c;

    printf("Enter the real part: ");
    scanf("%f", &c.real);

    printf("Enter the imaginary part: ");
    scanf("%f", &c.imaginary);

    return c;
}

// Function to write a complex number
void writeComplex(struct Complex c) {
    printf("Complex number: %.2f + %.2fi\n", c.real, c.imaginary);
}

// Function to add two complex numbers
struct Complex addComplex(struct Complex c1, struct Complex c2) {
    struct Complex result;

    result.real = c1.real + c2.real;
    result.imaginary = c1.imaginary + c2.imaginary;

    return result;
}

// Function to multiply two complex numbers
struct Complex multiplyComplex(struct Complex c1, struct Complex c2) {
    struct Complex result;

    result.real = c1.real * c2.real - c1.imaginary * c2.imaginary;
    result.imaginary = c1.real * c2.imaginary + c1.imaginary * c2.real;

    return result;
}

int main() {
    struct Complex complex1, complex2, sum, product;

    printf("Enter the first complex number:\n");
    complex1 = readComplex();

    printf("Enter the second complex number:\n");
    complex2 = readComplex();

    printf("\n");
    printf("Complex numbers entered:\n");
    writeComplex(complex1);
    writeComplex(complex2);

    printf("\n");
    sum = addComplex(complex1, complex2);
    printf("Sum of the two complex numbers:\n");
    writeComplex(sum);

    printf("\n");
    product = multiplyComplex(complex1, complex2);
    printf("Product of the two complex numbers:\n");
    writeComplex(product);

    return 0;
}
