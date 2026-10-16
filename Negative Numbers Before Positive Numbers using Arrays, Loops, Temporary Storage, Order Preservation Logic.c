/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int arr[100], result[100];
    int size;
    int i, j = 0;

    printf("Enter array size : ");
    scanf("%d", &size);

    printf("Enter array elements:\n");

    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            result[j] = arr[i];
            j++;
        }
    }

    for (i = 0; i < size; i++)
    {
        if (arr[i] >= 0)
        {
            result[j] = arr[i];
            j++;
        }
    }

    printf("Rearranged the array elements : ");

    for (i = 0; i < size; i++)
    {
        printf("%d ", result[i]);
    }

    return 0;
}