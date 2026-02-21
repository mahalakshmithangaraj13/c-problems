#include<stdio.h>
int main(){
    int n,target;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Sum=");
    scanf("%d",&target);
    int pair=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                printf("%d ",arr[i]);
                printf("%d",arr[j]);
                pair=1;
                break;
            }
    }
    if(pair==1){
        break;
    }
}   
    if(pair==0){
        printf("No pair");
    }
    return 0;
}