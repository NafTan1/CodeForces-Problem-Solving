#include <stdio.h>
int main() 
{

   int n;
   scanf("%d",&n);
   long long int next_num;
   long long int a=0, b=1; 
   for (int i = 0; i < n; i++)
   {
        if (i<=1){
           next_num=i;  
        }
        else{
            next_num=a+b;
            a=b;
            b=next_num;
        }
   }
    printf("%lld",next_num);
   
}