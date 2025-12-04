//program to Reverse a string.
#include <stdio.h>
int main() {
    char str[100];
    int i = 0, j, temp;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    // Finding the length of the string
    while(str[i] != '\0' && str[i] != '\n') {
        i++;
    }
    j = i - 1; // Set j to the last character index
    i = 0;     // Reset i to the start of the string
    // Reversing the string in place
    while(i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    printf("The reversed string is: %s\n", str);
    return 0;      
}