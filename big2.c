#include<stdio.h>
void biggest2()
{
    int num1, num2, large;
    printf("Enter any two numbers: ");
    scanf("%d%d", &num1, &num2);
    large = (num1>num2) ? num1 : num2;
    printf("\nLargest = %d", large);
   // return 0;
}

