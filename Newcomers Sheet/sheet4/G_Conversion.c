#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int value=pow(10,5);
    char str[value+1];
    scanf("%s",str);
    for (int i=0; i<strlen(str);i++){
        if (str[i]==','){
            str[i]=' ';
        }
        else if (str[i]==toupper(str[i])){
            str[i]=tolower(str[i]);
        }
        else{
            str[i]=toupper(str[i]);
        }
    }
    printf("%s",str);
    return 0;
}