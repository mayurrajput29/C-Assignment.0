#include<stdio.h>
int main()
{

// Write a program to check whether a person is eligible to vote (age ≥ 18) #problem.6

int age;
printf("Enter your age :");
scanf("%d",&age);

if(age>=18)
{
    printf("ELIGIBLE FOR VOTE ");
}
else
{
    printf("NOT ELIGIBLE FOR VOTE !!");
}
    return 0;
}