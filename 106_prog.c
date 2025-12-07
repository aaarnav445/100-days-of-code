#include <stdio.h>

int main() {
    int n, i, j;
    if (scanf("%d", &n) != 1) return 0;
    int a[n];
    for (i = 0; i < n; i++) scanf("%d", &a[i]);

    for (i = 0; i < n; i++) {
        int next = -1;
        for (j = i + 1; j < n; j++)
            if (a[j] > a[i]) { next = a[j]; break; }
        printf("%d", next);
        if (i != n - 1) printf(", ");
    }
    return 0;
}

