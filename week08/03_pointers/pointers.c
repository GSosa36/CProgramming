#include <stdio.h>


void setToZero(int *n);

double productPointers(double *p1, double *p2); 



/*******************************************************************/

int main(){

    int luck = 100;

    // Access
    printf("%d\n", luck);

    // Modify
    luck+= 10;
 
    // Print the address of luck variable
    printf("The address of luck is %p\n", &luck); // %p - to print an address

    // Create a pointer variable
    // <data_type> *pointer_name;

    int *luck_ptr = &luck; 

    // Access the data the pointer is pointing to
    // * - dereferencing operator

    printf("Dereference luck_ptr %d\n", *luck_ptr);

    // Modify the data through the pointer

    *luck_ptr = 300;

    printf("The value of luck after modification %d\n", luck);


    // Passing by-reference
    setToZero(&luck);
    printf("The value of luck after setting to 0 %d\n", luck);


    double d1 = 2.4;
    double d2 = 6.43;

   printf ("%lf\n",productPointers(&d1,&d2)); 

    int a = 10;
    int b = -10;

    int *a_ptr = &a;
    int *b_ptr = &b;
  

    return 0;
}

/*******************************************************************/

void setToZero(int *n){

    *n = 0;


}


/*******************************************************************/

double productPointers(double *p1, double *p2){

  return *p1 * *p2;

}