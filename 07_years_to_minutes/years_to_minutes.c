#include <stdio.h>


int main() {

//Context message

puts("Enter your age in years");


// variables
int years = 1;
int days = 365;
int minutes = 0;

// scaning for inputed year

scanf("%d", &years);


//math 
minutes = years * days * 24 * 60;

// print calculation

printf(" %c%d%c is %d minutes old\n",'"',years,'"', minutes);




return 0;


    
}