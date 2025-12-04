//Program to reverse each word in a sentence without changing the word order.
#include <stdio.h>
#include <string.h>
void reverseWord(char str[], int start, int end) {
    char temp;
    while(start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}
int main() {
    char str[200];
    int i = 0, wordStart = 0;
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    // Reversing each word in the sentence
    while(str[i] != '\0' && str[i] != '\n') {
        if(str[i] == ' ' || str[i] == '\t') {
            reverseWord(str, wordStart, i - 1);
            wordStart = i + 1;
        }
        i++;
    }
    // Reverse the last word
    reverseWord(str, wordStart, i - 1);
    printf("Sentence after reversing each word:\n%s\n", str);
    return 0;      
}