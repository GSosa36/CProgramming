#include <stdio.h>

#define SIZE 11

int main(){

    int c[5] = {-45, 6, 0, 72, 1543};
    int sum = c[0] + c[2];

    printf("%d\n", sum);

    double d_arr[SIZE] = {0.0};
    d_arr[5] = 4.53;
    printf("%.2lf %.2lf\n", d_arr[1], d_arr[10]);

    return 0;
}

