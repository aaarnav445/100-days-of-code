//Program to check if a string is a palindrome.
#include <stdio.h>
int main() {
    char str[100];
    int i = 0, j, isPalindrome = 1;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    // Finding the length of the string
    while(str[i] != '\0' && str[i] != '\n') {
        i++;
    }
    j = i - 1; // Set j to the last character index
    i = 0;     // Reset i to the start of the string
    // Checking for palindrome
    while(i < j) {
        if(str[i] != str[j]) {
            isPalindrome = 0;
            break;
        }
        i++;
        j--;
    }
    if(isPalindrome) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");    
    }
    return 0;      
}