#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Declare variables for storing user guess, the random number, and the number of attempts
    int guess, r, attempts;

    // Seed the random number generator with the current time
    srand(time(NULL));

    // Generate a random number between 1 and 100
    r = rand() % 100 + 1;

    // Initialize the number of attempts
    attempts = 5;

    // Prompt the user to guess the number
    printf("Guess the number (between 1 and 100) with 5 attempts:\n");

    // Loop for user attempts
    while (attempts > 0) {
        // Prompt the user for their guess
        printf("Attempts remaining: %d\n", attempts);
        printf("Enter your guess: ");
        scanf("%d", &guess);

        // Check if the guess is correct
        if (guess == r) {
            printf("Congratulations! You guessed the number!\n");
            break; // Exit loop if the guess is correct
        } else if (attempts == 1) {
            printf("Sorry, you have run out of attempts.\n");
            break; // Exit loop if attempts exhausted
        } else {
            printf("Incorrect guess. Try again.\n");
        }

        // Decrement attempts
        attempts--;
    }

    // Display the correct number regardless of the user's guess
    printf("The number was: %d\n", r);

    return 0;
}
