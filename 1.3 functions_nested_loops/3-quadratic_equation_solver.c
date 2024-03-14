#include <stdio.h>
#include <math.h>

// Function to calculate the discriminant of the quadratic equation
double calculateDiscriminant(double a, double b, double c) {
    return (b * b) - (4 * a * c);
}

// Function to solve the quadratic equation and print the roots
void solveQuadraticEquation(double a, double b, double c) {
    double discriminant = calculateDiscriminant(a, b, c);

    if (discriminant > 0) {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and different:\n");
        printf("Root 1 = %.2lf\n", root1);
        printf("Root 2 = %.2lf\n", root2);
    } else if (discriminant == 0) {
        double root = -b / (2 * a);
        printf("Roots are real and same:\n");
        printf("Root = %.2lf\n", root);
    } else {
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex and different:\n");
        printf("Root 1 = %.2lf + %.2lfi\n", realPart, imaginaryPart);
        printf("Root 2 = %.2lf - %.2lfi\n", realPart, imaginaryPart);
    }
}

int main() {
    double a, b, c;

    // Prompt the user to enter coefficients of the quadratic equation
    printf("Enter coefficients a, b, and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    // Call the function to solve the quadratic equation
    solveQuadraticEquation(a, b, c);

    return 0;
}
