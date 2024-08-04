#include<stdio.h>

void summation(int *arr,int n,long long int sum)
{
    
    if (n==0) 
    {
        printf("%lld",sum); 
        return;
    }

    sum+=arr[n-1];
    summation(arr,n-1,sum);
        
}

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    summation(arr,n,0);
    return 0;
}