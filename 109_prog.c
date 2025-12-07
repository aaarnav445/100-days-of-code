#include <stdio.h>

int main() {
    int n, k, i;
    if (scanf("%d %d", &n, &k) != 2) return 0;
    int a[n];
    for (i = 0; i < n; i++) scanf("%d", &a[i]);

    if (k > n) { printf("0"); return 0; }

    long long sum = 0;
    for (i = 0; i < k; i++) sum += a[i];
    long long mx = sum;

    for (i = k; i < n; i++) {
        sum += a[i] - a[i - k];
        if (sum > mx) mx = sum;
    }

    printf("%lld", mx);
    return 0;
}

