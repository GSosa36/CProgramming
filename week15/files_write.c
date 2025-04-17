#include <stdio.h> // FILE data structure

/**********************************************************************************************/



/**********************************************************************************************/

int main(int argc, char *argv[]){
    
    // Create a pointer to a FILE structure
    FILE *file = NULL;

    // Open the file
    // fopen - creates the file and returns the pointer to FILE
    file = fopen("out.txt", "w");

    // Check whether the file was successfully opened
    if(file == NULL){

        puts("File could not be opened");
        return 1;

    }

    // Write into a file
    int i = 1;

    while(i <= 100){

        // fprintf - write into a file
     if(i < 100){

        fprintf(file, "%d\n", i++);
     } else{
        fprintf(file, "%d", i++);
     }
    
        
    }


    // Close the file
    fclose(file);

    return 0;
}

/**********************************************************************************************/