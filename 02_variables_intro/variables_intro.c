/*

    The Introduction to variables

*/


// Preprocessor directive
// stdio - standard input output
#include <stdio.h>

// Create a main function

int main() {
    // Create a variable
    int first_number;
    // Assign the value to a variable
    first_number = 100;

    // Create and initialize
    int second_number = -19;

    // Print the value of the variable
    printf("The first number is %d\n", first_number);
    printf("The second is %d\n", second_number);

    //Create a sum of two numbers
    int sum = first_number + second_number;
    printf("%d + %d = %d\n", first_number, second_number, sum);

    return 0;
    
}