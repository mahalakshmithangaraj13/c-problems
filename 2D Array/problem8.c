#include<stdio.h>
int main(){
    int rows,colums;
    scanf("%d %d",&rows,&colums);
    int arr[rows][colums];
    for(int i=0;i<rows;i++){
        for(int j=0;j<colums;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int max=0;
    for(int i=0;i<rows-1;i++){
        int sum=0;
        for(int j=0;j<colums-1;j++){
            sum=arr[i][j]+arr[i+1][j]+arr[i][j+1]+arr[i+1][j+1];  
        
     if(sum>max){
        max=sum;
            }  
        }}
    printf("%d",max);
}