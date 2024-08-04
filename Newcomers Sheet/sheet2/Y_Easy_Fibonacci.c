#include <stdio.h>
int main() 
{

   int n;
   scanf("%d",&n);
   int next_num;
   int a=0; int b=1; 
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
        printf("%d ",next_num);
   }
   
}