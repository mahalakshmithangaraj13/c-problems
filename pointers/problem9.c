#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int *p=arr;
    for(int i=0;i<n;i++){
        scanf("%d",&*(p+i));
    }
    int element;
    int index=0;
    scanf("%d",&element);
    for(int i=0;i<n;i++){
        if(*(p+i)==element){
            printf("%d",i+1);
             index=1;
        }
    }
    if(index==0){
        printf("%d",-1);
    }
    return 0;
}