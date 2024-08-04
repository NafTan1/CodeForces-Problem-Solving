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
    int j=0;
    int temp;
    for (int k =n-1; k >= 0; k--)
    {
        temp=arr[k];
        arr[k]=arr[j];
        arr[k]=temp;
        printf("%d ",arr[k]);
        j++;
        //printf("arr-2: %d \n",arr[j]);
    
    }
    
    
    return 0;
}