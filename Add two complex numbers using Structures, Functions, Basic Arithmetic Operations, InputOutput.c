/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

struct complex
{
    float real;
    float imaginary;
    
};

struct complex addcomplex(struct complex num1, struct complex num2)
{
    struct complex result;
    result.real = num1.real + num2.real;
    result.imaginary = num1.imaginary + num2.imaginary;
    
    return result;
}

void displaycomplex(struct complex num)
{
    if(num.imaginary >= 0)
    printf("%.2f + %.2fi\n",num.real,num.imaginary);
    
    else
    printf("%.2f - %.2fi\n",num.real,-num.imaginary);
    
}

int main()
{
    struct complex num1,num2,sum;
    
    printf("Enter the real and imaginary of first complex number : ");
    scanf("%f %f",&num1.real,&num1.imaginary);
    
    printf("Enter the real and imaginary of second complex number : ");
    scanf("%f %f",&num2.real,&num2.imaginary);
    
    sum = addcomplex(num1,num2);
    
    printf("First complex number : ");
    displaycomplex (num1);
    
    printf("Second complex number : ");
    displaycomplex (num2);
    
    printf("Sum : ");
    displaycomplex (sum);

    return 0;
}
