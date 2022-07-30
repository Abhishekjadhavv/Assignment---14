// Write a program in C to read n number of values in an array and display it in reverse
// order. Take array values from the user.

#include <stdio.h>

int main()
{
    int n = 5;
    int arr[n], i;

    printf("Enter %d numbers", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}