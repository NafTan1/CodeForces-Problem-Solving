#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d\n",&n);
    int arr1[n];

    int index_value=-1;
    for (int i=0; i<n; i++){
        scanf("%d", &arr1[i]);
        
    }
    int x;    
    scanf("%d", &x); 

    for (int k=0; k<n;k++){    
        
        if (arr1[k]==x) {
            index_value=k;
            printf("%d",index_value);
            exit(0);
        
        } 
        
        
    }
   
    printf("%d",index_value);
    return 0;
}