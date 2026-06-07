#include<stdio.h>
int main()
{

// Write a C program to input the base and height of a triangle and calculate its area. #problem.9

int base;
int height;
int area;

printf("Enter the base of triangle\n :");
scanf("%d",&base);

printf("Enter the height of triangle\n :");
scanf("%d",&height);

area = 0.5 * base * height;

printf("The total area of triangle %d:",area);
 

    return 0;
}