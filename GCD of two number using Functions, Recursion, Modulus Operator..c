/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int find_gcd(int a,int b)
{
    if(b==0)
    {
           return a;
    }
 
    return find_gcd(b, a % b);
}

    
int main()
{
int num1,num2,gcd;

printf("Enter the two number : ");
scanf("%d%d",&num1,&num2);

gcd=find_gcd(num1,num2);

printf("GCD of given %d and %d is : %d",num1,num2,gcd);

return 0;
}