/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    unsigned int num;
    int i,position,toggle_bit;
    
    printf("Enter the number : ");
    scanf("%u", &num);
    
    printf("Enter the starting bit position : ");
    scanf("%d", &position);
    
    printf("Enter the number of bit to toggle : ");
    scanf("%d", &toggle_bit);
    
    for(i=0;i<toggle_bit;i++)
    {
        num = num ^ (1U << (position +i));
    }
     printf("After toggled output : %u\n", num);
    
    return 0;
}