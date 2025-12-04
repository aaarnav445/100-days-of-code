//Program to find the longest world in a sentence.
#include <stdio.h>
#include <string.h>
int main() {
    char str[200];
    int i = 0, maxLength = 0, currentLength = 0, startIndex = 0, maxStartIndex = 0;
    
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    
    // Finding the longest word in the sentence
    while(str[i] != '\0' && str[i] != '\n') {
        if(str[i] != ' ' && str[i] != '\t') {
            currentLength++;
        } else {
            if(currentLength > maxLength) {
                maxLength = currentLength;
                maxStartIndex = startIndex;
            }
            currentLength = 0;
            startIndex = i + 1;
        }
        i++;
    }
    // Check for the last word
    if(currentLength > maxLength) {
        maxLength = currentLength;
        maxStartIndex = startIndex;
    }
    
    // Print the longest word
    printf("The longest word is: ");
    for(i = maxStartIndex; i < maxStartIndex + maxLength; i++) {
        putchar(str[i]);
    }
    printf("\n");
    
    return 0;      
}