#include<stdio.h>

int main()
{

/* converting temperature from Celsius to Fahrenheit
 using formula : F=(C∗9/5)+32*/

    float C, F;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &C);

    F = (C * 9 / 5) + 32;

    printf("Temperature in Fahrenheit = %.2f", F);

    return 0;
}