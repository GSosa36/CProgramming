#include <stdio.h>


int main(){
    // Get the uppercase character
/*
    char input;

    do{

        printf("Enter an uppercase character: ");
        scanf(" %c", &input);
    
    }while(input < 'A' || input > 'Z');

    // Get the positive integer

    int number;

do{

    printf("Enter a positive number: ");
    scanf(" %d", &number);

}while(number <= 0);

    // Print the scanned char the integer number of times (for loop)
    // A
    // 5
    // AAAAA


for ( int i = 1; i <= number; i++){
    printf("%c", input);
}
*/
// TODO
// Scan a second character which should be either * or # and nothing e
// Print the patterm
// B 5 *
// B*B*B*B*B*
// Advance patern B**B**B*

char input2;
do{

    printf("Enter an uppercase character: ");
    scanf(" %c", &input2);

}while(input2 < 'A' || input2 > 'Z');

char number2;

do{

    printf("Enter a positive number: ");
    scanf(" %d", &number2);

}while(number <= 0);

for ( int i = 1; i <= number; i++){
    printf("%c%c", &input2,'*');

  

    return 0;
}
}