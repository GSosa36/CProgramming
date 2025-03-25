#include <stdio.h>

#define SIZE 10


// Print the double values of the given array

void printDoubledArray(const int *arr, int size);


// Searching in arrays (linear search)
/*
    Search for the location of the first zero in the array and returns it.

    Returns -1 if there are no zeros.

*/ 
int firstZero(const int *arr, int size);


int lastZero(const int *arr, int size);


/*
Return 1 if there is even number of zeros 0s
Return 0 if there is odd number of zeros or there are no zeros.
*/

int hasEvenZeros(const int *arr, int size);

int nthZero(const int *arr, int size, int n);

int million();


/*************************************** */

int main() {

    int a[SIZE] = {1,2,3,4,5,6};

    printDoubledArray(a, SIZE);

    int first_zero = firstZero(a, SIZE);

    if(first_zero == -1){
        puts("There are no zeros");

    } else{
        int last_zero = lastZero(a, SIZE);
        printf("The index of the first zero is %d\n", first_zero);
        printf("The index of the last zero is %d\n", last_zero);

    }



    return 0;
}

/*************************************** */

void printDoubledArray(const int *arr, int size){

    for( int i = 0; i < size; i++){

        printf("%d ", arr[i]*2);

    }

        puts("");

}

/*************************************** */

int firstZero(const int *arr, int size){

    for (int i = 0; i < size; i++){

        if (arr[i] == 0){

            return i;
        }

    }

    // no zeros
    return -1;

}

/*************************************** */

int lastZero(const int *arr, int size){


    for (int i = size - 1; i < size; i--){

        if (arr[size - 1] == 0){

            return i;
        }

    }

    // no zeros
    return -1;


}

/*************************************** */

int hasEvenZeros(const int *arr, int size){




}