/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <limits.h>

int main()
{
    int arr[100], size, i;
    int largest, second_Largest;
    int smallest, second_Smallest;

    printf("Enter the array size : ");
    scanf("%d", &size);

    printf("Enter the array elements :\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    if (size < 2)
    {
        printf("At least two elements are required.\n");
        return 0;
    }

    largest = INT_MIN;
    second_Largest = INT_MIN;

    smallest = INT_MAX;
    second_Smallest = INT_MAX;

    for (i = 0; i < size; i++)
    {
        if (arr[i] > largest)
        {
            second_Largest = largest;
            largest = arr[i];
        }
        else if (arr[i] > second_Largest && arr[i] != largest)
        {
            second_Largest = arr[i];
        }

        if (arr[i] < smallest)
        {
            second_Smallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] < second_Smallest && arr[i] != smallest)
        {
            second_Smallest = arr[i];
        }
    }

    if (second_Largest == INT_MIN)
        printf("Second largest element does not exist.\n");
    else
        printf("Second largest element in array = %d\n", second_Largest);

    if (second_Smallest == INT_MAX)
        printf("Second smallest element does not exist.\n");
    else
        printf("Second smallest element in array = %d\n", second_Smallest);

    return 0;
}