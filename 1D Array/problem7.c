#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int even_count=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            even_count++;
        }
    }
    int odd_count=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2!=0){
            odd_count++;
        }
    }
    printf("Even:%d ",even_count);
    printf("Odd:%d",odd_count);
}