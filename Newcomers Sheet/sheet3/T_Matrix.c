#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int md=0, sd=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            if (i==j)
            {
                md+=arr[i][j];    
            }
            if (i+j==n-1)
            {
                sd+=arr[i][j];
            }
       
        }
    }
    int sum=abs(md-sd);
    printf("%d",sum);
    return 0;
}