#include<stdio.h>

void printDigits(int n)
{
    if (n == 0)
        return;
    printDigits(n / 10);
    printf("%d ", n % 10);

}

void digits(int t)
{
    if (t==0) 
        return;
    int n;
    scanf("%d",&n);
    if (n == 0)
        printf("0 ");
    else
        printDigits(n);
    printf("\n");
    digits(t-1);  
    
}


int main()
{
    int t;
    scanf("%d",&t);
    digits(t);
    return 0;
}