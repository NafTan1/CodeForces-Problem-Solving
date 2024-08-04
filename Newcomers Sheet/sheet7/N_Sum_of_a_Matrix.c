#include<stdio.h>

void sum(int r,int c,int a[r][c],int b[r][c],int row,int col)
{
        if (row==r) return; 
        if (col==c) 
        {
            printf("\n");
            sum(r,c,a,b,row+1,0);
            return;
        } 
        
        a[row][col]=a[row][col]+b[row][col];
        printf("%d ",a[row][col]);
        sum(r,c,a,b,row,col+1);   
    
}

int main()
{
    int r,c;
    scanf("%d %d",&r,&c);
    int a[r][c];
    int b[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d",&a[i][j]);
        }    
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d",&b[i][j]);    
        }    
    }
    
    sum(r,c,a,b,0,0);
    return 0;
}