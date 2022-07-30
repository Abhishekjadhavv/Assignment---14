// Write a program to find the second smallest number in an array.Take array values
// from the user.

#include <stdio.h>

int main()
{
    int n = 5, i, round, temp, second_smallest;
    int arr[n];

    printf("Enter %d numbers", n);

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (round = 1; round <= n - 1; round++)
        for (i = 0; i <= (n - 1) - round; i++)
            if (arr[i] > arr[i + 1])
            {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }

     second_smallest = arr[1];

    printf("Second smallest number of array is %d", second_smallest);

    return 0;
}