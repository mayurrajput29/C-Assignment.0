#include<stdio.h>
int main(){

//Write a C program to convert given minutes into hours and remaining minutes 
//#problem.7

int minutes1= 120;
int hours;

// convert minutes to hours

int minutes2= 10;
int seconds;

// convert minutes to seconds

hours = minutes1/60;
seconds = minutes2*60;

printf("Minutes to hours :%d\n ",hours);
printf("Minutes to seconds :%d",seconds);

    return 0;
}