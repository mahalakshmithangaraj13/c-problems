#include<stdio.h>
int main(){
    int n,k;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int min=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            if(arr[i]<min || min==-1){
                min=arr[i];
            }
        }
        }
    if(min==-1){
        printf("No positive");
    }
    else{
        printf("%d",min);
    }
    return 0;
}
     