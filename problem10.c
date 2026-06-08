#include<stdio.h>
int main()
{

/*Write a C program to input marks of five subjects
find the total marks, and calculate the percentage. #problem.10*/

//The program for finding five subjects total marks and their percentage


int operating_s;
int RDBMS;
int cprogramming;
int Java;
int python;
int total_marks;
float percentage;


printf("Enter the marks of operating_s \n:");
scanf("%d",&operating_s);

printf("Enter the marks of RDBMS\n");
scanf("%d",&RDBMS);

printf("Enter the marks of cprogramming\n");
scanf("%d",&cprogramming);

printf("Enter the marks of Java\n");
scanf("%d",&Java);

printf("Enter the marks of python\n :");
scanf("%d",&python);

total_marks = operating_s+RDBMS+cprogramming+Java+python;
printf("Total marks of five subjects: %d\n",total_marks);


percentage = (total_marks / 300.0) * 100;
printf("PERCENTAGE :%f",percentage);





    return 0;
}