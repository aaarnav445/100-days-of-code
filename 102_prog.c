#include <stdio.h>

int ceil_index(int a[], int n, int x) {
    int l = 0, r = n - 1, ans = -1;
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (a[m] >= x) { ans = m; r = m - 1; }
        else l = m + 1;
    }
    return ans;
}

int main() {
    int n, i, x;
    if (scanf("%d", &n) != 1) return 0;
    int a[n];
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &x);

    printf("%d", ceil_index(a, n, x));
    return 0;
}

