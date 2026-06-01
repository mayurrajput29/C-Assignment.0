#include<stdio.h>

int main()
{

 // Assignment 0.
 //1. Write a C program to add two integers and display the result.

int num1 , num2 , sum;

printf("Enter the value of num1 :");
scanf("%d", &num1);

printf("Enter the value of num2 :");
scanf("%d", &num2);

sum = num1 + num2;

printf("The addition of num1 & num2 : %d",sum);


return 0;

}