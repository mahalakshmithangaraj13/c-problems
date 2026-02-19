#include<stdio.h>
int main(){
    int n,k;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int avg,sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
        avg=sum/n;
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(avg<arr[i]){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}