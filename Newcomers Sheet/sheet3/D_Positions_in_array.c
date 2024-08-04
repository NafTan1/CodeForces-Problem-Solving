#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for (int k = 0; k < n; k++)
    {
        if (arr[k]<=10){
            printf("A[%d] = %d\n",k,arr[k]);
        }
    }
    
    return 0;
}