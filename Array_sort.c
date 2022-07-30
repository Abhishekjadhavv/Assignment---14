// Write a program to sort elements of an array of size 10. Take array values from the
// user.

#include <stdio.h>

int main()
{
    int arr[10], i, round, temp;

    printf("Enter 10 numbers");

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Before sorting\n");
    for (i = 0; i < 10; i++)
        printf("%d ", arr[i]);

    for (round = 1; round <= 9; round++)
    {
        for (i = 0; i <= 9 - round; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }

    printf("\nAfter sorting\n");
    for (i = 0; i < 10; i++)
        printf("%d ", arr[i]);

    return 0;
}