#include<stdio.h>
int main(){
    int n; 
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++){
        int minimum=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minimum]){
            minimum=j;
        }
    }
    if(minimum!=i){
        int temp=arr[i];
        arr[i]=arr[minimum];
        arr[minimum]=temp;
    }
}
for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
}
return 0;
}