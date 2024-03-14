#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
// Returns true if the number is prime, false otherwise
bool isPrime(int number) {
    // Check if the number is less than or equal to 1
    if (number <= 1) {
        return false; // Numbers less than or equal to 1 are not prime
    }

    // Check if the number is divisible by any number from 2 to the square root of the number
    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return false; // If number is divisible by any other number, it's not prime
        }
    }

    return true; // If none of the conditions are met, number is prime
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Call the isPrime function to check if the entered number is prime
    if (isPrime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
