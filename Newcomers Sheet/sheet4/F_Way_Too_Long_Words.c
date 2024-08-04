/**
 * The function reads a number of strings, shortens them if they are longer than 10 characters by
 * replacing the middle characters with a count, and prints the modified or original strings.
 * 
 * @return The main function in the code snippet returns an integer value of 0.
 */
#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    char str[101];
    for(int i=0; i<t; i++) 
    {
        scanf("%s",str);
        if (strlen(str)>10){
            char first_char=str[0];
            char last_char=str[strlen(str)-1];
            int count=strlen(str)-2;
            printf("%c%d%c\n",first_char,count,last_char);
        }
        else{
            printf("%s\n",str);
        }
    }
    return 0;
}