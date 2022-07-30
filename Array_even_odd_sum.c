// Write a program to calculate the sum of all even numbers and sum of all odd
// numbers, which are stored in an array of size 10. Take array values from the user.

#include<stdio.h>

int main(){
    int arr[10],sum_even = 0,sum_odd = 0;

    printf("Enter 10 numbers");
    
    for (int i = 0; i < 10; i++)
    {
         scanf("%d",&arr[i]);

         if(arr[i] % 2 == 0)
           sum_even+=arr[i];
         else  
           sum_odd+=arr[i];  
    }

    printf("\nSum of all even numbers is %d",sum_even);
    printf("\nSum of all odd numbers is %d",sum_odd);
    return 0;
    
}