/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char str[100];
    int i,length=0;
    int palindrome=1;
    
    printf("Enter the string : ");
    scanf("%s", str);
    
    while (str[length] !='\0')
    {
        length++;
    }
    
    for(i=0;i<length/2;i++)
    {
        if(str[i] != str[length-i-1])
        {
            palindrome =0;
            break;
        }
        
    }
    if(palindrome)
    {
        printf("Given string is palindrome");
    }
    else
    {
        printf("Given string is not a palindrome");
    }
    return 0;
}