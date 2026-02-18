#include<stdio.h>
int main(){
    int n,x;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&x);
    int count=0;
    for(int j=0;j<n;j++){
        if(arr[j]==x){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}