#include <stdio.h>

int main() {
    int n, i;
    if (scanf("%d", &n) != 1) return 0;
    int a[n];
    for (i = 0; i < n; i++) scanf("%d", &a[i]);

    int candidate = 0, count = 0;
    for (i = 0; i < n; i++) {
        if (count == 0) { candidate = a[i]; count = 1; }
        else count += (a[i] == candidate) ? 1 : -1;
    }

    count = 0;
    for (i = 0; i < n; i++) if (a[i] == candidate) count++;

    if (count > n / 2) printf("%d", candidate);
    else printf("-1");
    return 0;
}

