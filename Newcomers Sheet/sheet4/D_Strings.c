#include<stdio.h>
#include<string.h>
int main()
{
    char a[11], b[11];
    scanf("%s",a);
    scanf("%s",b);
    int a_size=strlen(a);
    int b_size=strlen(b);
    printf("%d %d\n",a_size,b_size);
    //strcat(a,b);
    printf("%s%s\n",a,b);
    char temp;
    temp=a[0];
    a[0]=b[0];
    b[0]=temp;
    printf("%s %s\n",a,b);
    return 0;
}