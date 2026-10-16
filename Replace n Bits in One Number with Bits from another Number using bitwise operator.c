/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    unsigned int num1, num2;
    unsigned int temp, extract_bits;
    int position,replace_bit;
    
    printf("Enter first number : ");
    scanf("%u", &num1);
    
    printf("Enter second number : ");
    scanf("%u", &num2);
    
    printf("Enter the starting bit position : ");
    scanf("%d", &position);
    
    printf("Enter the number of bits to replace : ");
    scanf("%d", &replace_bit);
    
    
    temp = (1U << replace_bit) - 1;
   
    num1 = num1 & ~(temp << position);

    extract_bits = num2 & temp;

    num1 = num1 | (extract_bits << position);


    printf("After replaced bit value : %u\n", num1);
    
    return 0;
}