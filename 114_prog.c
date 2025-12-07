#include <stdio.h>
#include <string.h>

int main() {
    char s[1001];
    if (scanf("%s", s) != 1) return 0;
    int last[256], i;
    for (i = 0; i < 256; i++) last[i] = -1;

    int left = 0, best = 0;
    for (i = 0; s[i] != '\0'; i++) {
        unsigned char ch = s[i];
        if (last[ch] >= left) left = last[ch] + 1;
        last[ch] = i;
        int len = i - left + 1;
        if (len > best) best = len;
    }

    printf("%d", best);
    return 0;
}

