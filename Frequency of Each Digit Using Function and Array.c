/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void countFrequency(long long num, int frequency[])
{
    int digit;

    if (num == 0)
    {
        frequency[0]++;
        return;
    }

    if (num < 0)
        num = -num;

    while (num > 0)
    {
        digit = num % 10;
        frequency[digit]++;

        num = num / 10;
    }
}

int main()
{
    long long num;
    int frequency[10] = {0};
    int i;

    printf("Enter the integer value : ");
    scanf("%lld", &num);

    countFrequency(num, frequency);

    printf("\nDigit Frequency:\n");

    for (i = 0; i < 10; i++)
    {
        printf("%d = %d times\n", i, frequency[i]);
    }

    return 0;
}
