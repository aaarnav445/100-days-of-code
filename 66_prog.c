//Program to insert an element in a sorted array at the appropriate position.
#include <stdio.h>
int main() {
    int n, i, element, position;
    printf("Enter number of elements in the sorted array: ");
    scanf("%d", &n);
    int arr[n + 1]; // Create an array with one extra space for the new element
    printf("Enter %d sorted elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter element to insert: ");
    scanf("%d", &element);
    // Find the position to insert the new element
    position = n; // Default position is at the end
    for(i = 0; i < n; i++) {
        if(arr[i] > element) {
            position = i;
            break;
        }
    }
    // Shift elements to the right to make space for the new element
    for(i = n; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    // Insert the new element
    arr[position] = element;
    printf("Array after insertion:\n");
    for(i = 0; i < n + 1; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}