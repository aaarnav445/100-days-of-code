#include <stdio.h>

int main() {
    int n,i;
    scanf("%d",&n);
    int a[n+1], freq[n+1];
    for(i=0;i<=n;i++) freq[i]=0;

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(freq[a[i]]==1){
            printf("%d",a[i]);
            return 0;
        }
        freq[a[i]]++;
    }
    return 0;
}

