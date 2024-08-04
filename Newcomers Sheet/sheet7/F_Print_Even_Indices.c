#include<stdio.h>

void even_odd(int *arr,int n)
{
    if (n==0) return;
    
    if ((n-1)%2==0)
    {
        printf("%d ",arr[n-1]);
    }
    even_odd(arr,n-1);
        
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
    even_odd(arr,n);
    return 0;
}