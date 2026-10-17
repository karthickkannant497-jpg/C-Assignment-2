/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int arr[100], size;
    int i, j, k;

    printf("Enter the array size: ");
    scanf("%d", &size);

    printf("Enter the array elements:\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                for (k = j; k < size - 1; k++)
                {
                    arr[k] = arr[k + 1];
                }

                size--;
                j--;
            }
        }
    }

    printf("After removing duplicates array elements :\n");

    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}