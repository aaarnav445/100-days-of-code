//Program to count positive, negative, and zero elements in an array.
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
    // Counting positive, negative, and zero elements
    int positiveCount = 0;
    int negativeCount = 0;
    int zeroCount = 0;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] > 0)
        {
            positiveCount++;   
        }
        else if(arr[i] < 0)
        {
            negativeCount++;   
        }
        else
        {
            zeroCount++;   
        }
    }   
    // Printing the counts
    printf("Number of positive elements in the array: %d\n", positiveCount);
    printf("Number of negative elements in the array: %d\n", negativeCount);
    printf("Number of zero elements in the array: %d\n", zeroCount);
    return 0;
}