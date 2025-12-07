#include <stdio.h>

int main() {
    int n, k, i, j;
    if (scanf("%d %d", &n, &k) != 2) return 0;
    int a[n];
    for (i = 0; i < n; i++) scanf("%d", &a[i]);

    for (i = 0; i <= n - k; i++) {
        int mx = a[i];
        for (j = i; j < i + k; j++)
            if (a[j] > mx) mx = a[j];
        if (i) printf(" ");
        printf("%d", mx);
    }
    return 0;
}

