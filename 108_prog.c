#include <stdio.h>

int main() {
    int n, i;
    if (scanf("%d", &n) != 1) return 0;
    int a[n];
    for (i = 0; i < n; i++) scanf("%d", &a[i]);

    long long left[n], right[n];
    left[0] = 1;
    for (i = 1; i < n; i++) left[i] = left[i-1] * a[i-1];

    right[n-1] = 1;
    for (i = n - 2; i >= 0; i--) right[i] = right[i+1] * a[i+1];

    for (i = 0; i < n; i++) {
        long long prod = left[i] * right[i];
        printf("%lld", prod);
        if (i != n - 1) printf(" ");
    }
    return 0;
}

