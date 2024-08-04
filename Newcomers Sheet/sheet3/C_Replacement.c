#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

   
    for (int k=0; k<n; k++){    
        if (arr[k]==0){
            arr[k]=0;
            printf("0 ");
        }
        else if (arr[k]>0){
            arr[k]=1;
            printf("1 ");
        }
        else{
            arr[k]=-1;
            printf("2 ");
        }
    }

    return 0;
}