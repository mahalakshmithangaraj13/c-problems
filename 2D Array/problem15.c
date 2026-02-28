#include<stdio.h>
#include<math.h>
int main(){
    int rows,colums;
    scanf("%d %d",&rows,&colums);
    int arr[rows][colums];
    for(int i=0;i<rows;i++){
        for(int j=0;j<colums;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int count=0,isprime;
    for(int i=0;i<rows;i++){
        for(int j=0;j<colums;j++){
           arr[i][j];
           isprime=1;
           if(arr[i][j]<=1){
            isprime=0;
           }
           else{
            for(int k=2;k<arr[i][j]-1;k++){
               if(arr[i][j]%k==0){
                isprime=0;
                break;
               }
            }
           }
           if(isprime==1){
            count++;
           }
        }
    }
    printf("%d",count);  
}