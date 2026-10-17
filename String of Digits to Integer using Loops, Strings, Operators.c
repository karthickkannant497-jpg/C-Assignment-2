/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char str[100];
    int i = 0;
    int num = 0;

    printf("Enter the number as a string : ");
    scanf("%s", str);

    while (str[i] != '\0')
    {
        num = num * 10 + (str[i] - '0');
        i++;
    }

    printf("The final Integer value = %d\n", num);

    return 0;
}