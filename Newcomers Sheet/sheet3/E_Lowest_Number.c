#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int min=INT_MAX;
    int index_value;
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
        if (arr[i]<min){
            min=arr[i];
            index_value=i+1;
        }
    }
    printf("%d %d",min,index_value);
    return 0;
}