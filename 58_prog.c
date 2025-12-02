//Program to find the maximum and minimum element in an array.
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
    // Finding the maximum and minimum elements
    int max = arr[0];
    int min = arr[0];
    for(int i = 1; i < n; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];   
        }
        if(arr[i] < min)
        {
            min = arr[i];   
        }
    }   
    // Printing the maximum and minimum elements
    printf("The maximum element in the array is: %d\n", max);
    printf("The minimum element in the array is: %d\n", min);
    return 0;
}