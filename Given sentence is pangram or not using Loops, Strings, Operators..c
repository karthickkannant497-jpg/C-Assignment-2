/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char str[500];
    int alphabet[26] = {0};
    int i,pangram = 1;
    
    printf("Enter the sentence : ");
    scanf(" %[^\n]", str);
    
    i=0;
    
    while(str[i] != '\0')
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            alphabet[str[i] - 'A'] =1; 
        }
        else if(str[i] >= 'a' && str[i] <= 'z')\
        {
            alphabet[str[i] - 'a'] =1;
        }
        i++;
    }
    
    for(i=0;i<26;i++)
    {
        if(alphabet[i] == 0)
        {
            pangram = 0;
            break;
        }
    }
    if(pangram)
    {
        printf("Given string is a pangram \n");
    }
    else
    {
        printf("Given string is not a pangram \n");
    }
    
    return 0;
}