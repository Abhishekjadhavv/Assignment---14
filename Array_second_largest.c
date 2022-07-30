// Write a program to find second largest in an array.Take array values from the user.

#include <stdio.h>

int main()
{
    int n = 5, i, round, temp, second_largest;
    int arr[n];

    printf("Enter %d numbers",n);

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

    second_largest = arr[n - 2];

    printf("Second largest number of array is %d", second_largest);

    return 0;
}
