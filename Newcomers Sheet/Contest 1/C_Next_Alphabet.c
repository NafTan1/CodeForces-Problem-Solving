#include<stdio.h>
int main()
{
    char c;
    scanf("%c",&c);
    if (c==122){
        c=97;
    }
    else{

        c=c+1;
    }

    printf("%c",c);
    return 0;
}