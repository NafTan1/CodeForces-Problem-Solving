#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int min=INT_MAX;
    int min_index=0;
    int max=INT_MIN;
    int max_index=0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
        if (arr[i]<min) {min=arr[i];min_index=i;}
        if (arr[i]>max) {max=arr[i];max_index=i;}
    }

    int temp;
    temp=arr[max_index];
    arr[max_index]=arr[min_index];
    arr[min_index]=temp;
    for(int i=0; i<n;i++) printf("%d ",arr[i]);
    return 0;
}