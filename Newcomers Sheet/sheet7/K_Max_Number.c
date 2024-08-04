#include<stdio.h>
#include<limits.h>
void max_num(int *arr,int n,int i,int max)
{
    if (i==n)
    {
        printf("%d",max);
        return;
    }
    if (arr[i]>max)
    {
        max=arr[i];
    }
    max_num(arr,n,i+1,max);
    
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

    max_num(arr,n,0,INT_MIN);
    return 0;
}