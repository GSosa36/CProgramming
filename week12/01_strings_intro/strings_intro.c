#include <stdio.h>
#include <stdbool.h>

/*

    // Checks is the given character an uppercase.

*/

bool isUpper(char c);

/*

    // Checks is the given character a lowercase.

*/

bool isLower(char c);

/*

    // Checks is the given character is a letter.
 
*/

bool isAlpha(char c);

/*

    // Checks is the given character is a letter or a digit.
 
*/

bool isAlnum(char c);

char toLowers(char c);

void printReversedCase(const char *str);

/*****************************************************************/

int main(){

    // Create a character
    char ch = 'B';

    // Create a boolean variable
    const bool isHappyAfterSecondExamIntroClass = true; // false

    //  Test isUpper
    printf("isUpper(%c) = %d\n", ch, isUpper(ch));
    //  Test isLower
    printf("isLower(%c) = %d\n", ch, isLower(ch));
    //  Test isAlpha
    printf("isAlpha(%c) = %d\n", ch, isAlpha(ch));
    //  Test isAlnum
    printf("isAlnum(%c) = %d\n", ch, isAlnum(ch));

///////////////////////////////////////////////////////////////////////

    // Create a string
    char str[] = "HeLlO ThErE!";
    char *str = &str;

    // Print the string
    puts("Printing with printf");
    printf("%s\n\n", str);

        // Print the string
        puts("Printing with a loop");
        for(int i = 0; str[i] != '\0'; i++){ // str[i] != '\0' - continue till the end of the string

            printf("%c", str[i]);

        }

        puts("\n");

        puts("Printing with puts");
        puts(str);

        puts("\n");

        puts("Print the string in lowercase");

        for (int i = 0; str[i] != '\0'; i++){

            putchar(toLowers(str[i]));

        }
        
        puts("\n");
        

        
        for (int i = 0; str[i] != '\0'; i++){

            putchar(toLowers(str[i]));

        }
        
        puts("\n");
        

    return 0; 
}

/*****************************************************************/

bool isUpper(char c){

    if(c >= 'A'&& c<= 'Z'){

        return true;
    }
    else{

        return false;

    }

}

/*****************************************************************/

bool isLower(char c){

    if(c >= 'a'&& c<= 'z'){

        return true;
    }
    else{

        return false;

    }

}

/*****************************************************************/

bool isAlpha(char c){


    if(isUpper(c) == true || isLower(c) == true){

        return true;
    }
    else{

        return false;

    }



} 

/*****************************************************************/

bool isAlnum(char c){


    if(isAlpha(c) == true || (c >= '0' && c <= '9')){

        return true;
    }
    else{

        return false;

    }    


}

/*****************************************************************/

char toLowers(char c){

    if(isUpper(c) == true){

        return c + 32;

    }
    else{

        return c;

    }

} 

/*****************************************************************/

void printReversedCase(const char *str){

    if(isUpper(*str) == true){

        return *str + 32;

    }
    else{

        return *str - 32;

    }

}