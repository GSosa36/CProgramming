#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Symbolic constant
#define SIZE 2000

// Functions with arrays
void printArray(int *arr, int size);

void initWithRandom(int *arr, int size, int left, int right);

void replaceNegativesWithPositives();

/******************************************************/

int main(void){


    srand(time(0));

    // Create an array of 20 integers
    int arr[SIZE];

    // Initialize the first element with 999
    arr[0] = 999;

    // Initialize the last element with 111
    arr[SIZE - 1] = 111;

    // Print the first and the last elements of the array
    printf("First %d; Last %d \n", arr[0], arr[SIZE - 1]);

    // Initialize an array with a loop
    for(int i = 0; i < SIZE; i++){
        arr[i] = 9;

    }


    // Reinitialize an array with values from 10 to 200
    // 10 20 30 ... 200 
    int val = 10;
    for(int i = 0; i < SIZE; i++){

        arr[i] = val;
        val += 10;
    }
   // printArray(arr, SIZE);

    // Reinitialize with random numbers from -20 to postitive 20
    for(int i = 0; i < SIZE; i++){

        arr[i] = rand() % (20 - (-20) + 1) + (-20);

    }

    // Print an array
    for (int i = 0; i < SIZE; i++){

        printf("%d ", arr[i]);

    }
    puts("");


    //printf("\n%d\n", arr);

    // Function call

    //printArray(arr, SIZE);

    initWithRandom(arr, SIZE, -100, 100);

    return 0;
}

/******************************************************/

void printArray(int *arr, int size){

    // Print an array
    for (int i = 0; i < size; i++){

        printf("%d ", arr[i]);

    }
    puts("");


}

void initWithRandom(int *arr, int size, int left, int right){

    for(int i = 0; i < size; i++){

        arr[i] = rand() % (right - (left) + 1) + (left);

    }
    // Print an array
    for (int i = 0; i < size; i++){

        printf("%d ", arr[i]);

    }
    puts("");


}

/******************************************************/
