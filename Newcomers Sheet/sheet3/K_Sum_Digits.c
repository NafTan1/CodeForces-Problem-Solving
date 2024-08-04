#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    char digits[n+1];
    scanf("%s",digits);
    for (int i=0; i<n;i++) {
        arr[i]=digits[i]-'0';
    }
    int sum=0;
    for (int i=0; i<n; i++){
        sum+=arr[i];
    }
    printf("%d",sum);
    return 0;
}