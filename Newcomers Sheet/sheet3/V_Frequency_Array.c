#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int arr[n];
    int cnt[m];
    for (int i = 0; i < m; i++) cnt[i]=0;
    
    for (int i=0; i<n; i++) {
        scanf("%d",&arr[i]);
        int val=arr[i]-1;
        cnt[val]++;
    }

    for (int i = 0; i <m; i++) printf("%d\n",cnt[i]);
    return 0;
}