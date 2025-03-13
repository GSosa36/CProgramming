/*

    Introduction to iteration statements (loop).

    While loop


*/

#include <stdio.h>

#include <unistd.h> // usleep function
#include <stdlib.h> // rand function
#include <time.h> // time function

void whatIf(void);

// Print HELLO 100 times
void printHello(void);

void printNHello (int n);

int fahrenheitToCelcius(int temp);

void printTemp(int min, int max);

void printNRandom(int n);





int main(void){

    srand(time(0));

    //whatIf();
    
    //printHello(56);
    
    //printNHello(67);

   // printTemp(0, 90);

   printNRandom(10);

    return 0;

}

void whatIf(void){

    int a = 10;

    if (a == 10 ) {

        puts("XL7XJ");

    } else{

        puts("LKL9U");

    }


}
/******************************************** */
void printHello(void){

    // Use an interation statement (loop)
    // we need 3 things for the loop to work
    // 1 - counter (initialization) starting value
    // 2 - condition (when to stop iteration)
    // 3 - increment (change the counter variable)


    int i = 1; // counter

    while (i <= 100){

        printf("%d - HELLO!\n", i);

        usleep(30000);
        
        i = i + 1;

    }

}
/******************************************** */

void printNHello (int n){


    while (n > 0){

        printf("%3d - HELLO!\n", n);

        usleep(30000);
        
        n = n - 1;

    }


}

/******************************************** */
int fahrenheitToCelcius(int temp){

    return (temp - 32) * 5 / 9 ;

}


/******************************************** */

void printTemp(int min, int max){

    int t = min;


    while (t <= max){

        printf("%+5d - %+d\n", t, fahrenheitToCelcius(t));

        t = t + 1;

    }


}


/******************************************** */

void printNRandom(int n){

    while (n > 0) {

        printf("%d\n", rand() % 10);

        n = n - 1;


    }


}
