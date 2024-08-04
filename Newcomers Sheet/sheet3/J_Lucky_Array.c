#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int cnt[100000]={0};
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    //Determinig if the array is lucky or not
    int min=INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (arr[i]<min)
        {
            min=arr[i];
        }
        cnt[arr[i]]++;   
    }
      
    (cnt[min]%2!=0) ? printf("Lucky") : printf("Unlucky") ;
      
    return 0;
}