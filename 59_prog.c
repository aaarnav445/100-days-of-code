//Program to count even and odd numbers in an array.
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
    // Counting even and odd numbers
    int evenCount = 0;
    int oddCount = 0;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0)
        {
            evenCount++;   
        }
        else
        {
            oddCount++;   
        }
    }   
    // Printing the counts
    printf("Number of even elements in the array: %d\n", evenCount);
    printf("Number of odd elements in the array: %d\n", oddCount);
    return 0;
}