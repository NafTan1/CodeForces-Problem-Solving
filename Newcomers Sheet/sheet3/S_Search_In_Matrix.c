#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        
    }
    int x;
    scanf("%d",&x);
    int flag=1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(arr[i][j]==x) flag=0;
        }

    }
    (flag==1) ? printf("will take number") : printf("will not take number") ;
    return 0;
}