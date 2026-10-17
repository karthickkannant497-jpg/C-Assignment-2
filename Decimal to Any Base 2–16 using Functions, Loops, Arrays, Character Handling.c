/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include <stdio.h>

void convertToBase(int decimal, int base, char result[])
{
    char digits[] = "0123456789ABCDEF";
    int remainder;
    int i = 0;
    int j;
    char temp;

    if (decimal == 0)
    {
        result[0] = '0';
        result[1] = '\0';
        return;
    }

    while (decimal > 0)
    {
        remainder = decimal % base;
        result[i] = digits[remainder];

        decimal = decimal / base;
        i++;
    }

    result[i] = '\0';

    for (j = 0; j < i / 2; j++)
    {
        temp = result[j];
        result[j] = result[i - j - 1];
        result[i - j - 1] = temp;
    }
}

int main()
{
    int decimal, base;
    char result[100];

    printf("Enter the decimal number : ");
    scanf("%d", &decimal);

    printf("Enter the target base (2-16) : ");
    scanf("%d", &base);

    if (base < 2 || base > 16)
    {
        printf("Invalid base. Enter the base between 2 and 16.\n");
    }
    else if (decimal < 0)
    {
        printf("Please enter the positive decimal number.\n");
    }
    else
    {
        convertToBase(decimal, base, result);

        printf("%d in base %d = %s\n", decimal, base, result);
    }

    return 0;
}
