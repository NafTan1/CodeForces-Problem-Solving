#include<stdio.h>
#include<limits.h>
int min_max(int *a,int size)
{
    int min=INT_MAX, max=INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (*(a+i)<min) min=*(a+i);
        if (*(a+i)>max) max=*(a+i);  
    }
    printf("%d %d",min,max);

}

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0; i<n; i++) scanf("%d",&arr[i]);
    min_max(arr,n);
    return 0;
}