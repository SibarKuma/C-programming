#include <stdio.h>

int main (){
    
    // Declare variables to store temperature values in Fahrenheit and Celsius
    int fahrenheit;
    int celsius;

    // Prompt the user to input the temperature in Fahrenheit and read the input using scanf
    printf("Input Temperature (Fahrenheit): ");
    scanf("%d", &fahrenheit);

    // Calculate the equivalent temperature in Celsius using the conversion formula
    celsius = (fahrenheit - 32) * 5/9;

    // Display the temperature in Celsius
    printf("The Temperature in Celsius is: %d°C", celsius);

    // Indicate successful execution by returning 0 to the operating system
    return 0;
}
