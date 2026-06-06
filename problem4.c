#include<stdio.h>
int main(){

// C program to swap two numbers using a temporary third variable

int x = 45;
int y = 55;
int temp;

temp = x;       // temp = x(45)
x = y;         // x = y(55)
y = temp;     //y = temp(45)


printf("The value of x is :%d\n",x);
printf("The value of y is :%d",y);

    return 0;
}