#include <stdio.h>

int main() {
    int n, i, j;
    if (scanf("%d", &n) != 1) return 0;
    int a[n];
    for (i = 0; i < n; i++) scanf("%d", &a[i]);

    for (i = 0; i < n; i++) {
        int prev = -1;
        for (j = i - 1; j >= 0; j--)
            if (a[j] > a[i]) { prev = a[j]; break; }
        printf("%d", prev);
        if (i != n - 1) printf(", ");
    }
    return 0;
}

