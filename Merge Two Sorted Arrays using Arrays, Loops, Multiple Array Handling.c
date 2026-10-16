/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a[100], b[100], c[200];
    int a1, a2;
    int i = 0, j = 0, k = 0;

    printf("Enter the size of first array: ");
    scanf("%d", &a1);

    printf("Enter the first sorted array:\n");
    for (i = 0; i < a1; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the size of second array: ");
    scanf("%d", &a2);

    printf("Enter the second sorted array:\n");
    for (i = 0; i < a2; i++)
    {
        scanf("%d", &b[i]);
    }

    i = 0;

    while (i < a1 && j < a2)
    {
        if (a[i] <= b[j])
        {
            c[k] = a[i];
            i++;
        }
        else
        {
            c[k] = b[j];
            j++;
        }

        k++;
    }

    while (i < a1)
    {
        c[k] = a[i];
        i++;
        k++;
    }

    while (j < a2)
    {
        c[k] = b[j];
        j++;
        k++;
    }

    printf("Final Merged and sorted array:\n");

    for (i = 0; i < k; i++)
    {
        printf("%d ", c[i]);
    }

    return 0;
}