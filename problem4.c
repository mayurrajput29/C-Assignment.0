#include<stdio.h>
int main(){

//Write a program to check whether a given character is a vowel or consonant #problem.4

char ch ;

printf("Enter the character :");
scanf("%c",&ch);

if (ch=='a'||'e'=='i'||'o'=='u'||ch=='A'||'E'=='I'||'O'=='U')
{
    printf("Vowels");
}
else
{
   printf("consonant");
}

    return 0;
}