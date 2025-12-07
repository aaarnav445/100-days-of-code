#include <stdio.h>

int main() {
    int n, i;
    if (scanf("%d", &n) != 1) return 0;
    int a[n];
    long long total = 0, left = 0;
    for (i = 0; i < n; i++) { scanf("%d", &a[i]); total += a[i]; }

    for (i = 0; i < n; i++) {
        if (left == total - left - a[i]) {
            printf("%d", i);
            return 0;
        }
        left += a[i];
    }

    printf("-1");
    return 0;
}

