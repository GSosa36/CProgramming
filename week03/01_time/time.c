/*

The program converts the given number of seconds to hours minutes and seconds

65 seconds -> 0 hours, 1 minute, 5 seconds


*/

#include <stdio.h>

int main()  {

    int seconds = 0;
    int minutes = 0;
    int remaining_seconds = 0;
    int hours = 0;


    //Get the number of seconds
    puts("Enter the number of seconds");
    scanf("%d",&seconds);

    // Calculate number of minutes
    minutes = seconds/60;
    hours = minutes/60;

    // Calculate remaining seconds
    remaining_seconds = seconds % 60;

    remaining_seconds = minutes % 60;

    // Print the result
    printf("%d seconds is %d hours %d minutes and %d seconds\n", seconds,hours, minutes, remaining_seconds);


    return 0;

}


//TODO by thursday
// Calcualte the number of hours