#include <stdio.h>

// Function to calculate the nth Fibonacci number using recursion
int fibonacci(int n) {
    // Base case: return 0 for n = 0
    if (n == 0) {
        return 0;
    }
    // Base case: return 1 for n = 1
    else if (n == 1) {
        return 1;
    }
    // Recursive case: calculate the Fibonacci number for n
    else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

// Function to print Fibonacci series up to specified number of terms
void printFibonacciSeries(int terms) {
    printf("Fibonacci Series up to %d terms:\n", terms);
    for (int i = 0; i < terms; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
}

int main() {
    int num_terms;

    // Prompt the user to enter the number of terms for Fibonacci series
    printf("Enter the number of terms for Fibonacci series: ");
    scanf("%d", &num_terms);

    // Print Fibonacci series up to the specified number of terms
    printFibonacciSeries(num_terms);

    return 0;
}
