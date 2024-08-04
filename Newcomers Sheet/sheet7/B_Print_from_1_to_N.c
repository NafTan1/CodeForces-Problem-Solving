#include<stdio.h>
#include<string.h>

void N_to_one(int n)
{
    if (n==1) 
    {
        printf("%d",n); 
        return;
    }
    printf("%d ",n);
    N_to_one(n-1);
}

void palindrome(char *s, int i ,int k)
{
    
    if (i>k)
    {
        printf("Yes");
        return;
    }
    if (s[i]!=s[k]){
        printf("No");
        return;
    }
    palindrome(s,i+1,k-1);
}

int main()
{
    int n;
    scanf("%d",&n);
    N_to_one(n);

    printf("\n");

    char s[1001];
    scanf("%s",s);
    palindrome(s,0,strlen(s)-1);

    return 0;
}



