#include<stdio.h>
#include<string.h>
int main()
{
    char t[1000], s[1000];
    scanf("%s\n",s);
    scanf("%s\n",t);
    int s_len=strlen(s); 
    int t_len=strlen(t);
    printf("%d %d\n",s_len,t_len);
    printf("%s %s",s,t);
    return 0;
}