#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char c[1001];
    scanf("%s",c);
    int rev=strlen(c)-1;
   
    int count=0;
    int i=0;
    while (i<rev)
    {
        
        if (c[i]==c[rev]){
                i++;
                rev--;
                
        }
        else{
            printf("NO");
            exit(0);
        }
    
    }

    printf("YES");
    return 0;
}