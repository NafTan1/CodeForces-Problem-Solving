#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    int k;
    scanf("%d %d",&n,&k);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    long long int sum=0;

    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j <n ; j++)
        {
            if (arr[i]<arr[j])
            {
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }        
        }
        
    }

    for (int i = 0; i < k; i++)
    {
        if (arr[i]<0)
        { 
            break;
        }
        sum+=arr[i];
    }
     

    printf("%lld",sum); 
    return 0;
}

