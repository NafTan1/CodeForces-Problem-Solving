#include<stdio.h>
#include<math.h>
int main()
{
    int size=pow(10,6);
    char s[size+1];
    fgets(s,size+1,stdin);
    
    char i='\\';
    int k=0;
    while (s[k] != '\\')
    {
        printf("%c",s[k]);
        k++;
    }
    
    return 0;
}