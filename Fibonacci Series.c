/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num,i;
    int next_term,a=0,b=1;
    printf("Enter the number of term : ");
    scanf("%d",&num);
    
    printf("Fibonacci Series : ");
    for(i=1;i<=num;i++)
    {
        printf("%d",a);
        next_term = a+b;
        a=b;
        b=next_term;
    }
      
    return 0;
}