/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num,i,sum=0;

    printf("Enter the number of term : ");
    scanf("%d",&num);
    
    for(i=1;i<num;i++)
    {
    
      if(num%i==0)
      {
          sum = sum+i;
      }
    }
    if(sum==num)
    {
        printf("Given number %d is perfect number");
    }
    else
    {
        printf("Given number %d is not a perfect number");  
    }
      
    return 0;
}