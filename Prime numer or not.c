/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num,i,c=0;
    printf("Enter the number : ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
      if(num%i==0)
      {
          c++;
      }
    }
    if(c==0)
    {
        printf("Given num is prime number");
    }
    else
    {
        printf("Given num is Not a prime number");  
    }
    return 0;
}