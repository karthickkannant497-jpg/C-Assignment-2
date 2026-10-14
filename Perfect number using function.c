/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>


int perfect(int num)
{
    int i,sum=0;
    for(i=1;i<num;i++)
    {
    
      if(num%i==0)
      {
          sum = sum+i;
      }
    }
    
    return sum;
}

int main()
{
    int num,sum;

    printf("Enter the number of term : ");
    scanf("%d",&num);
    
    sum = perfect(num);
    
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