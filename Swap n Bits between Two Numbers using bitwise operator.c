/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    unsigned int num1, num2;
    unsigned int temp, bits1, bits2;
    int position,swap_bit;
    
    printf("Enter first number : ");
    scanf("%u", &num1);
    
    printf("Enter second number : ");
    scanf("%u", &num2);
    
    printf("Enter the starting bit position : ");
    scanf("%d", &position);
    
    printf("Enter the number of bits swap : ");
    scanf("%d", &swap_bit);
    
    
    temp = (1U << swap_bit) - 1;
   
    bits1 = (num1 >> position) & temp;
    bits2 = (num2 >> position) & temp;

    num1 = num1 & ~(temp << position);
    num2 = num2 & ~(temp << position);

    num1 = num1 | (bits2 << position);
    num2 = num2 | (bits1 << position);

    printf("After swaped first bit = %u\n", num1);
    printf("After swaped second bit = %u\n", num2);

    return 0;
}