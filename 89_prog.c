//Program to count frequency of a given character in a string.
#include <stdio.h>
int main() {
    char str[100], ch;
    int i = 0, frequency = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter character to find frequency: ");
    scanf("%c", &ch);
    // Counting frequency of the given character
    while(str[i] != '\0' && str[i] != '\n') {
        if(str[i] == ch) {
            frequency++;
        }
        i++;
    }
    printf("The frequency of character '%c' in the string is: %d\n", ch, frequency);
    return 0;      
}
