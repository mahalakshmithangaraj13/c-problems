#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int *p=arr;
    for(int i=0;i<n;i++){
        scanf("%d",&*(p+i));
    }
    int result;
    for(int i=n-1;i>=0;i--){
         result=*(p+i);
         printf("%d",result);
    }
    return 0;
    }
