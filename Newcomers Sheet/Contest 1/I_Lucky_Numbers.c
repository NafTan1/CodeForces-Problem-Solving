
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    
    int rem=n%10;
    int div=n/10;
    if (rem%div==0){
        printf("YES");
    }
    else if (div%rem==0){
        printf("YES");
    }
    else{
        printf("NO");
    }

    return 0;
}