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


// The function tha converts the given number of miles to kilometers
double milesToKmns(int miles);


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
    
    //test miles to kilometers
    
    
    double miles = milesToKmns(123);
    double kms = milesToKmns(kms);
    printf("Enter in miles: ");
    scanf("%d\n",&miles);
    printf("%d is this %d kilometers", miles);

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
/**************************************************************** */

double milesToKmns(int miles){

double kms = miles * 1.609;

return kms;


}