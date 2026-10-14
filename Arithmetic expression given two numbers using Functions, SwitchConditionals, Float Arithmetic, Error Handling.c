/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int add(float a,float b)
{
  return a+b;
}

int subtract(float a,float b)
{
  return a-b;
}
int multiply(float a,float b)
{
  return a*b;
}
int division(float a,float b)
{
    if (b == 0)
    {
        printf("Error: Division by zero is not allowed.\n");
        return 0;
    }

  return a/b;
}

float calculate(float a,float b,char operator)
{
    switch (operator)
    {
        case '+':
        return add(a,b);
        
        case '-':
        return subtract(a,b);
        
        case '*':
        return multiply(a,b);
        
        case '/':
        return division(a,b);
        
        default:
            printf("Invalid operator.\n");
            return 0;

    }
}
int main()
{
    float num1,num2,result;
    char operator;
    
    printf("Enter the first number : ");
    scanf("%f",&num1);
    
    printf("Enter the operator(+,-,* and /) : ");
    scanf(" %c",&operator);
    
    printf("Enter the second number : ");
    scanf("%f",&num2);
    
    result = calculate(num1, num2, operator);
    
    printf("The Result is = %.2f\n", result);

    return 0;
    
}