#include <stdio.h>
#include <string.h>

int main() {
    char s[1001], t[1001];
    if (scanf("%s %s", s, t) != 2) return 0;
    if (strlen(s) != strlen(t)) { printf("Not Anagram"); return 0; }

    int freq[26] = {0}, i;
    for (i = 0; s[i] != '\0'; i++) freq[s[i] - 'a']++;
    for (i = 0; t[i] != '\0'; i++) freq[t[i] - 'a']--;

    for (i = 0; i < 26; i++) if (freq[i] != 0) { printf("Not Anagram"); return 0; }

    printf("Anagram");
    return 0;
}

