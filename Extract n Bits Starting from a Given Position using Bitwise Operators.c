/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    unsigned int num, result, temp;
    int position,extract_bit;
    
    printf("Enter the number : ");
    scanf("%u", &num);
    
    printf("Enter the starting bit position : ");
    scanf("%d", &position);
    
    printf("Enter the number of bits to extract : ");
    scanf("%d", &extract_bit);
    
    
        temp = (1U << extract_bit) - 1;
        
        result = (num >> position) & temp;

     printf("Extracted bit value : %u\n", result);
    
    return 0;
}