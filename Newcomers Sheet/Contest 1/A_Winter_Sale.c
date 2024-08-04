#include<stdio.h>
#include<math.h>
int main()
{
    int x,p;
    scanf("%d %d",&x,&p);

    float v;
    v=round(100*p)/(100-x);
    printf("%.2f",v);
    return 0;
}