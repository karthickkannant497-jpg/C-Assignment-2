/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char str[500];
    int i = 0, j = 0;
    int spacefound = 0;

    printf("Enter the sentence : ");
    scanf(" %[^\n]", str);

    while (str[i] != '\0')
    {
        if (str[i] == ' ')
        {
            if (spacefound == 0)
            {
                str[j] = ' ';
                j++;
                spacefound = 1;
            }
        }
        else
        {
            str[j] = str[i];
            j++;
            spacefound = 0;
        }

        i++;
    }

    str[j] = '\0';

    printf("After removed the extra speces : %s\n", str);

    return 0;
}