#include <stdio.h>

int main() {
    int n, k, i, j;
    if (scanf("%d %d", &n, &k) != 2) return 0;
    int a[n];
    for (i = 0; i < n; i++) scanf("%d", &a[i]);

    for (i = 0; i < n - 1; i++)
        for (j = i + 1; j < n; j++)
            if (a[j] < a[i]) { int t = a[i]; a[i] = a[j]; a[j] = t; }

    if (k >= 1 && k <= n) printf("%d", a[k - 1]);
    else printf("-1");
    return 0;
}

