//Program to print all sub-strings of a string.
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int len, i, j, k;
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove newline character if present
    len = strlen(str);
    if(str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }
    
    printf("All substrings of the string are:\n");
    // Generating all substrings
    for(i = 0; i < len; i++) {
        for(j = i; j < len; j++) {
            for(k = i; k <= j; k++) {
                putchar(str[k]);
            }
            putchar('\n');
        }
    }
    
    return 0;      
}
