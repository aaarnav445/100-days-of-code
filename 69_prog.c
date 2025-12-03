//Progrm to find the second largest element in an array.
#include <stdio.h>
int main() {
    int n, i;
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }   
    int largest = -2147483648; // Initialize to minimum integer value
    int secondLargest = -2147483648; // Initialize to minimum integer value
    for(i = 0; i < n; i++) {
        if(arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if(arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }
    if(secondLargest == -2147483648) {
        printf("There is no second largest element in the array.\n");
    } else {
        printf("The second largest element in the array is %d.\n", secondLargest);
    }
    return 0;
}
