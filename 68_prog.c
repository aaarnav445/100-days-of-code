//Program to Delete an element from an array.
#include <stdio.h>
int main() {
    int n, i, element, position = -1;
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter element to delete: ");
    scanf("%d", &element);
    // Find the position of the element to delete
    for(i = 0; i < n; i++) {
        if(arr[i] == element) {
            position = i;
            break;
        }
    }
    // If element not found
    if(position == -1) {
        printf("Element %d not found in the array.\n", element);
        return 1;
    }
    // Shift elements to the left to overwrite the deleted element
    for(i = position; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    printf("Array after deletion of %d:\n", element);
    for(i = 0; i < n - 1; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}