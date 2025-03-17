#include<stdio.h>
struct rectangle{
    int length;
    int breadth;
}
main(){
    struct rectangle r={10,5};//declaration + initialization
    r.length=15;//value is modified using dot variable
    r.breadth=10;// . is used to access a member
    printf("Area of rectangle: %d\n",r.length*r.breadth);//accessing the members
    printf("Size of rectangle: %d",sizeof(r));
}