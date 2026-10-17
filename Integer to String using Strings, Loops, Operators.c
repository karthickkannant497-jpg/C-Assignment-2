/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num, temp, digit;
    char str[100];
    int i = 0, j;
    char character;

    printf("Enter the an intege value : ");
    scanf("%d", &num);

    temp = num;

    if (temp < 0)
    {
        temp = -temp;
    }

    if (temp == 0)
    {
        str[i++] = '0';
    }
    else
    {
        while (temp > 0)
        {
            digit = temp % 10;
            str[i] = digit + '0';
            i++;

            temp = temp / 10;
        }
    }

    if (num < 0)
    {
        str[i] = '-';
        i++;
    }

    str[i] = '\0';
        
    for (j = 0; j < i / 2; j++)
    {
        character = str[j];
        str[j] = str[i - j - 1];
        str[i - j - 1] = character;
    }

    printf("Final String character is = %s\n", str);
    
    return 0;
}