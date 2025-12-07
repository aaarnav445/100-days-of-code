#include <stdio.h>

int main() {
    int n, target, i, j;
    scanf("%d", &n);
    int a[n];
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&target);

    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]+a[j]==target){
                printf("%d %d",i,j);
                return 0;
            }
        }
    }
    printf("-1 -1");
    return 0;
}

