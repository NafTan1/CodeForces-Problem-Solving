#include<stdio.h>
#include<stdlib.h> 

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    long long int sum=0;
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
        sum+=arr[i];

    }
    sum= llabs(sum);
    printf("%lld",sum);
    return 0;
}



