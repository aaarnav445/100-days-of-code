//Program to rotate an array to the right by k positions.
#include <stdio.h>
void rotateArray(int arr[], int n, int k) {
    k = k % n; // In case k is greater than n
    int temp[k];
    
    // Store the last k elements in a temporary array
    for(int i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }
    
    // Shift the remaining elements to the right
    for(int i = n - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }
    
    // Copy the temporary array elements to the front
    for(int i = 0; i < k; i++) {
        arr[i] = temp[i];
    }
}
int main() {
    int n, k;
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter number of positions to rotate (k): ");
    scanf("%d", &k);    
    rotateArray(arr, n, k);    
    printf("Array after rotating to the right by %d positions:\n", k);
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");    
    return 0;
}