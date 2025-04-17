#include <stdio.h>


int main(argc, argv[]){

    char file_name;
    int number = 0;
    printf("./program ");
    scanf("%c", &file_name);
    scanf("%d" &number);

    File = *file = NULL;

    file = fopen(file_name, "w");

    for(int i = 0; i < number; i++){

        fprintf(file, "%c", file_name);

    }



    return 0;
}