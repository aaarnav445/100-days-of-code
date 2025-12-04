//Program to check if two strings are anagrams of each other.
#include <stdio.h>
#include <string.h> 
int main() {
    char str1[100], str2[100];
    int freq[256] = {0}; // Frequency array for all ASCII characters
    int i = 0;

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline characters if present
    str1[strcspn(str1, "\n")] = 0;
    str2[strcspn(str2, "\n")] = 0;

    // If lengths are different, they cannot be anagrams
    if(strlen(str1) != strlen(str2)) {
        printf("The strings are not anagrams.\n");
        return 0;
    }

    // Count frequency of each character in the first string
    while(str1[i] != '\0') {
        freq[(unsigned char)str1[i]]++;
        i++;
    }

    i = 0; // Reset index for second string

    // Decrease frequency based on the second string
    while(str2[i] != '\0') {
        freq[(unsigned char)str2[i]]--;
        i++;
    }

    // Check if all frequencies are zero
    for(i = 0; i < 256; i++) {
        if(freq[i] != 0) {
            printf("The strings are not anagrams.\n");
            return 0;
        }
    }

    printf("The strings are anagrams of each other.\n");
    return 0;      
}