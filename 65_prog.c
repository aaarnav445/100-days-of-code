//Program to search in a sorted array using binary search.
#include <stdio.h>
int main() {
    int n, i, search, left, right, mid, found = 0;
    printf("Enter number of elements in the sorted array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d sorted elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter element to search: ");
    scanf("%d", &search);   
    left = 0;
    right = n - 1;
    while(left <= right) {
        mid = left + (right - left) / 2;
        if(arr[mid] == search) {
            found = 1;
            break;
        } else if(arr[mid] < search) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    if(found) {
        printf("Element %d found at index %d.\n", search, mid);
    } else {
        printf("Element %d not found in the array.\n", search);
    }
    return 0;
}