#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int k=0;k<n;k++){
     scanf("%d",&arr[k]);}
    for(int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                arr[i]=0;
            }
        }
    }
    int temp;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
            if(arr[i]!=0){
               printf("%d ",arr[i]);
            }
    }
return 0;
}