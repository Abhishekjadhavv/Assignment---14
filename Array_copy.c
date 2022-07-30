// Write a program in C to copy the elements of one array into another array.Take array
// values from the user.

#include <stdio.h>

int main()
{
    int n = 5, i;
    int arr[n];

    printf("Enter %d numbers", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int arr1[n];

    for (i = 0; i < n; i++)
    {
        arr1[i] = arr[i];
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr1[i]);
    }

    return 0;
}