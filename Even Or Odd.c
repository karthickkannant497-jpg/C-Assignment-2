/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    if(num%2==0)
      {
          printf("Given num is Even number");
      }
       
    else
    {
        printf("Given num is Odd number");  
    }
    return 0;
}