/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char str[500];
    int i=0;
    printf("Enter the Lowercase string : ");
    scanf("%[^\n]", str);
    
    while(str[i] !='\0')
    {
        if(str[i] >='a' && str[i]<='z')
        {
            str[i] = str[i] - 32;
        }
        i++;
    }
    
    printf("Output of Uppercase string : %s\n ",str);

    return 0;
}