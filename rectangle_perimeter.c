#include <stdio.h>
//program to calculate perimeter of rectangle.
int main (){
    int l,b;
    printf("Enter length of the rectangle:");
    scanf("%d",&l);
    printf("Enter breadth of the rectangle:");
    scanf("%d",&b);
    printf("Area of the rectangle is: %d", 2*(l+b));
    return 0;
}