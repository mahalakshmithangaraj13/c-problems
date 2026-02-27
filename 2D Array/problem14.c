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
    int sum,arr1[colums];
    for(int i=0;i<colums;i++){
        sum=0;
       for(int j=0;j<rows;j++){
          sum+=arr[i][j];
       }
       arr1[i]=sum;
    }
    int max=0,index=0;
    for(int i=0;i<colums;i++){
        if(arr1[i]>max){
            max=arr1[i];
            index=i;
        }
        else{
            index=0;
        }
    }
    printf("%d",index);
    return 0;
}