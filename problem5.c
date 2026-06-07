#include<stdio.h>
int main()
{

//write a c program to input five numbers and find thier average.
//#problem.5

int a, b, c, d, e, sum;

printf("Enter the value of :");
scanf("%d%d%d%d%d", &a,&b,&c,&d,&e);

sum =a+b+c+d+e;
printf("Sum is :%d\n", sum);
printf("Average is : %d", sum/5);

    return 0;
}