#include<stdio.h>
#include<string.h>
int main()
{
    char a[21], b[21];
    scanf ("%s\n%s",a,b);
    // int val=strcmp(a,b);
    // if (val<0) printf("%s",a);
    // else if (val>0) printf("%s",b);
    // else printf ("%s",a);

    int i=0;
    while (1)
    {
        if (a[i]=='\0' && b[i]=='\0')
        {
            printf("same"); break;
        }
        else if (a[i]=='\0'){
            printf("A small"); break;
        }
        else if (b[i]=='\0'){
            printf("B small"); break;
        }
        if (a[i]==b[i]){
            i++;
        }
        else if (a[i]<b[i]){
            printf("A small"); break;
        }
        else{
            printf("B small"); break;
        }
    }
    return 0;
    

}