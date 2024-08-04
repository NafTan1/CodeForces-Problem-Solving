#include<stdio.h>

int vowels(char s[],int v)
{
    if (s[v]=='\0')
    {
        return 0;
    }
    int ans=vowels(s,v+1);
    if (s[v]>='A' && s[v]<='Z')
    {
        s[v]=s[v]+32;
    }
    
    if (s[v]=='a' || s[v]=='e' || s[v]=='i'|| s[v]=='o'|| s[v]=='u')
    {
        return ans+1;
    }
    else
    {
        return ans;
    }
    

}

int main()
{
    char s[201];
    fgets(s,201,stdin);
    int cnt = vowels(s,0);
    printf("%d",cnt);
    return 0;
}