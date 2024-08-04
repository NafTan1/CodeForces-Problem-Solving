#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int star=1; int space=n-1;
    for (int i = 1; i <=(n*2); i++)
    {
        for (int j = 1; j <=space ; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= star; j++)
        {
            printf("*");
        }
        printf("\n");
        if (i<n){
            space--; star+=2;
        }
        else if (i==n){
            space=0; star=n*2-1;
        }
        else{
            space++; star-=2;
        }

        
        
        
    }
    
    return 0;
}