//Program to find the sum of array elements.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    // Reading elements into the array
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    // Calculating the sum of the array elements
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    // Printing the sum
    printf("The sum of the array elements is: %d\n", sum);
    return 0;
}