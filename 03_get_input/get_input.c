/*

    Getting the input from the keyboard

*/

#include <stdio.h>

int main() {

    int square_side = 1;
    int square_perimeter = 0;
    int square_area = 0;

    // Write the prompt

    puts("Enter the side of a square");


    //Get the input
    // & - address operator

    scanf("%d", &square_side);


    //Do the math

    square_perimeter = square_side * 4;

    square_area = square_side*square_side;

    //Create the output

    printf ("The perimeter of a square with side %d is %d\n", square_side, square_perimeter);
    printf ("The area of a sqare with side %d is %d\n", square_side, square_area);

    

    return 0;

}
