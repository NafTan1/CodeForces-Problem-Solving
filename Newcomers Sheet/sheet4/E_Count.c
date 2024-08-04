#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    
    int value=pow(10,6);
    char s[value+1];
    //fgets(s,value,stdin);
    scanf("%s",s);
    long long int sum=0;
    
    for (int i=0; i<strlen(s); i++){
        
        //if (s[i] >= '0' && s[i] <= '9') 
        sum += s[i] - '0';
        
        
    }
   
    printf("%lld",sum);

    return 0;
}