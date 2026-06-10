#include<stdio.h>
int main()
{

// Write a program to check whether a given character is uppercase or lowercase #problem.6

char ch;

printf("Enter the chracter letter :");
scanf("%c",&ch);

if (ch>='A'&& ch<='Z')
{
    printf("UPPER CASE");
}
else if(ch>='a'&& ch<='z')
{
    printf("LOWER CASE");
}
else 
{
    printf("Not an alphabet");

}


    return 0;
}