/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int arr[100], size;
    int i, j, temp;
    int positions;
    char direction;

    printf("Enter the array size : ");
    scanf("%d", &size);

    printf("Enter the array elements :\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number of positions : ");
    scanf("%d", &positions);

    printf("Enter the direction (L for Left / R for Right) : ");
    scanf(" %c", &direction);

    positions = positions % size;

    if (direction == 'L' || direction == 'l')
    {
        for (i = 0; i < positions; i++)
        {
            temp = arr[0];

            for (j = 0; j < size - 1; j++)
            {
                arr[j] = arr[j + 1];
            }

            arr[size - 1] = temp;
        }
    }
    else if (direction == 'R' || direction == 'r')
    {
        for (i = 0; i < positions; i++)
        {
            temp = arr[size - 1];

            for (j = size - 1; j > 0; j--)
            {
                arr[j] = arr[j - 1];
            }

            arr[0] = temp;
        }
    }
    else
    {
        printf("Invalid direction.\n");
        return 0;
    }

    printf("Rotated the array elements are :\n");

    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}