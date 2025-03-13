#include <stdio.h>
#include <unistd.h>

 void printTriangleTopLeftStar(int size);
 
 void printTriangleBottomLeftStar(int size);

 void printTriangleBottomLeftNumbers(int size);


 void printTriangleTopLeftNumbers(int size);

/************************************************* */

int main(){
    int n = 0;

    // Scan a postive integer

  do{
       printf("Enter a postive integer: ");
        scanf("%d", &n);

    } while(n <= 0);

  //  int i = 1;
  //  while (i < 100) {

   //     printTriangleTopLeftStar(n);
    //    printTriangleBottomLeftStar(n);
    
    //    i++;

  //  }

    //printTriangleBottomLeftNumbers(n);

    printTriangleTopLeftNumbers(n);

    return 0;
}
/************************************************* */
/*
        5 
    *****
    ****
    ***
    **
    *

*/

void printTriangleTopLeftStar(int size){

    for(int i = 0; i < size; i++){

        for(int j = 0; j < size - i; j++){

            printf("%c", '*');
            usleep(3000);

        }
        puts(""); // new line after we done printing a line of *
    }

}
/************************************************* */
/*

5

*
**
***
****
*****


*/
void printTriangleBottomLeftStar(int size){


    for(int i = 0; i < size; i++){

        for(int j = 0; j <= i  ; j++){

            printf("%c", '*');
            usleep(3000);

        }
        puts(""); // new line after we done printing a line of *
    }


}

/************************************************* */
/*
        5 
    5
    54
    543
    5432
    54321
    

*/

void printTriangleBottomLeftNumbers(int size){

    
    for(int i = 0; i < size; i++){

        for(int j = size; j >= size - i; j--){
           
            printf("%d", j);
        
            
            usleep(3000);

        }
        puts(""); // new line after we done printing a line of *
    }

}


/************************************************* */
/*
 TODO
 TOP right
 bottom right
 bottom right numbers
 toprightnumbers

*/

void printTriangleTopLeftNumbers(int size){

  

    for(int i = 0; i < size; i++){

        for(int j = size; j >= size - i; j++){

            printf("%d", j);
            usleep(3000);

        }
        puts(""); // new line after we done printing a line of *
    }
}
