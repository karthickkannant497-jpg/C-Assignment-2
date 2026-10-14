/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, length = 0;
    char temp;

    printf("Enter a string : ");
    scanf("%s", str);

    //without using strlen finction

    while (str[length] != '\0')
    {
        length++;
    }

    //length = strlen(str); //using strlen function
    
    for (i = 0; i < length / 2; i++)
    {
        temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }

    printf("Reversed string : %s\n", str);

    return 0;
}
