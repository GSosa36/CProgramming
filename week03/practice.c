# include <stdio.h>



void two(void){

    printf("two \n");

}

void one_three(void){

    printf("one\n");

    two();

    printf("three\n");

}




int main(){

    printf("starting now:\n");

    one_three();

    printf("display done!\n");

    return 0;

}
