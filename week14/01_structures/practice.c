#include <stdio.h>

 struct Rectangle{

    double width;
    double height;


 };

 double createRectangle(double width, double height);
 double getPerimeter(const struct Rectangle *st);


int main(){

    struct Rectangle rect1;
    rect1.height = 10.6;
    rect1.width = 5.78;
    

    //createRectangle(width, height);
    struct Rectangle *rect_ptr = &rect1;


    printf("This is the perimeter of rectangle:\t%lf\n",getPerimeter(&rect1));


}

/*double createRectangle(double width, double height){

    struct Rectangle rect1;
    rect1.height = 10;
    rect1.width = 5;
    
    return rect1.height;
    return rect1.width;


}*/

double getPerimeter(const struct Rectangle *st){

    return 2*(st->width + st->height);


}