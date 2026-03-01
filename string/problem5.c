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
    int sum,arr1[rows];
    for(int i=0;i<rows;i++){
        sum=0;
        for(int j=0;j<colums;j++){
            sum+=arr[i][j];
        }
        arr1[i]=sum;
    }
     int avg,arr2[rows];
     for(int i=0;i<rows;i++){
        for(int j=0;j<colums;j++){
            avg=arr1[i]/colums;
        }
        arr2[rows]=avg;
     }
     int minavg=arr2[0],index=0;
     for(int i=1;i<rows;i++){
        if(arr2[i]<minavg){
            minavg=arr2[i];
            index=i;
        }
        else{
            index=0;
        }
     }
     printf("%d",index);
     return 0;
}