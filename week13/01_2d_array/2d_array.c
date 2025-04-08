#include <stdio.h>


/****************************************/

#define ROW 4
#define COL 4

/****************************************/

void printing(int rows, int cols, const int arr[rows][cols]);

void setRow(int rows, int cols, int arr[rows][cols], int row_num, int val);

int total(int rows, int cols, const int arr[rows][cols]);

/*

    Return the sum of perimeter elements.
    the outside of the array is added. 

*/
int totalPerim(int rows, int cols, const int arr[rows][cols]);

// ToDo
void setCol(int rows, int cols, int arr[rows][cols], int col_num, int val);

/****************************************/

int main(int argc, char *argv[]){

    // Create and initialize a 2D array of integers

    int arr[ROW][COL] = {
        {1,2,3},
        {4,5,6},
        {7,8,9},
    };

    // Access an element 
    printf("%d\n", arr[1][1]);

    // Change the value of the element
    arr[1][1] = 10;


    // Print an array
    printing(ROW, COL, arr);


    // Set the second row with 99's
    setRow(ROW, COL, arr, 0, 66);

    printing(ROW, COL, arr);

    printf("The sum is %d\n", total(ROW, COL, arr));

    return 0;
}

/****************************************/

void printing(int rows, int cols, const int arr[rows][cols]){

    for(int i = 0; i < rows; i++){

        for(int j = 0; j < cols; j++){

            printf("%4d", arr[i][j]);

        }
        puts("");
    }
    puts("");


}

/****************************************/

void setRow(int rows, int cols, int arr[rows][cols], int row_num, int val){

    for(int j = 0; j < cols; j++){

        arr[row_num][j] = val;

    }


}

/****************************************/

int total(int rows, int cols, const int arr[rows][cols]){

    int sum = 0;

    for(int i = 0; i < rows; i++){

        for(int j = 0; j < cols; j++){

            sum += arr[i][j];

        }
    }
    
    return sum;

}

/****************************************/

int totalPerim(int rows, int cols, const int arr[rows][cols]){

    int sum = 0;

    // add row 0 and 3 and add columns 0 and 3

    for(int i = 0; i < rows; i++){

        for(int j = 0; j < cols; j++){

            
        }

    }


}