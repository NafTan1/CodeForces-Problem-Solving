#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int k=1;
    while (k<=t)
    {
        int num;
        scanf("%d",&num);
        
        while (num>0)
        {
           
            int rem=num%10;
            printf("%d ",rem);
            num=num/10;
        }
        printf("\n");
        
        
        k++;
        
    }
    
}