#include<stdio.h>
int main()
{
    int a, b,c;
    scanf("%d %d %d",&a,&b,&c);
    int arr[3]={a,b,c};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 1; j < 3; j++)
        {
            if (arr[i]>arr[j])
            {
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
        
    } 
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n",arr[i]);        
    }
    printf("\n");
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);

    return 0;
}