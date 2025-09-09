/*
Task 7: Area and Perimeter of a Rectangle
● Write a C program that asks the user for the length and width of a rectangle.
● Calculate and display the area and perimeter.
*/

#include <stdio.h>

int main(){
    int length;
    int width;
    printf("Enter the length of rectangle ");
    scanf("%d",&length);
    printf("Enter the width of rectangle ");
    scanf("%d",&width);
    int area = length * width;
    int perimeter = (2*length) + (2*width);
    printf("Rectangle's Area is %d\n",area);
    printf("Rectangle's Perimeter is %d\n",perimeter);
    return 0;
}
