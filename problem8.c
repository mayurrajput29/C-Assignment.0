#include<stdio.h>
int main()
{

// Write a C program to input the length and width of a rectangle and find its perimeter. #problem.8

int length,width,perimeter;


printf("Enter the length of rectangle :\n");
scanf("%d", &length);

printf("Enter the width of rectangle :\n");
scanf("%d", &width);

perimeter = 2*(length+width);


printf("The perimeter is :%d",perimeter);


    return 0;
}