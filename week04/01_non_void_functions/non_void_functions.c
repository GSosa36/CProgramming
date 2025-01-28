/*

Practice with non-void functions

*/


#include <stdio.h>

// Function prototypes
// The function named getFive which returns an integer and takes no arguments

int getFive(void);

// Function named printCourse which returns nothing and takes one integer argum

void printCourse(int course_number);

// Void function that takes an integer and describes the weather

void describleWeather(int temp);



/********************************************************************* */

int main(void){


    int var = 0;

    //Call getFive function
    var = getFive();


    printf("var is %d\n", var);

    // Call printCourse
    printCourse(var);

    // Test describleWeather
    int temp = 0;

    printf("Enter a temperature: ");
    scanf("%d",&temp);
    describleWeather(temp);
    
    return 0;
}

/****************************************************************************************************************** */

//getFive implementation

int getFive(void){

    int five = 5;


    return five;

}


/***********************************************************/


void printCourse(int course_number) {

    printf("You are in COP%d course.\n", course_number);


}

/******************************************************** */
void describleWeather(int temp){

    // if statement
    if (temp > 70){

        puts("HOT");

    }

    if(temp <= 70){

        puts("COLD");


    }


}