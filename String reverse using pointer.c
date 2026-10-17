/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[10],reverse_str[10];
    //int i,length;
    
    printf("Enter the string : ");
    scanf("%s", str);
    
   char *i = str;
   char *j = reverse_str;
   
   while(*i!='\0')
   i++;
   i--;
   
   while(i>=&str[0])
   *j++ = *i--;
   *j = '\0';
   
    printf("String reverse : %s\n", reverse_str);
    
    return 0;
}