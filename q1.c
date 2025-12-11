#include <stdio.h>
int main()
{
    float value, result;
    int choice;
    printf("enter 1 for Celsius to Fahrenheit.\nenter 2 for Fehrenheit to Celsius \n");
    scanf("%d", &choice);
    printf("enter value ");
    scanf("%f", &value);
    if (choice == 1)
    {
        result = (value * 9.0 / 5.0) + 32;
    }
    else
    {
        result = (value - 32) * 5.0 / 9.0;
    }
    printf("Converted result= %f", result);
    return 0;
}