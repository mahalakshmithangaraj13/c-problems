#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        int left=0;
        int right=0;
    for(int j=0;j<i;j++){
        left=left+arr[j];
    }
    for(int k=i+1;k<n;k++){
        right=right+arr[k];
    }
    if(left==right){
        printf("%d",i);
        return 0;
    }
    }
    printf("%d",-1);
    return 0;
}