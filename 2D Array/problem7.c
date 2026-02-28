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
    int min,arr1[rows];
    for(int i=0;i<rows;i++){
        min=arr[i][0];
        for(int j=0;j<colums;j++){
            if(arr[i][j]<min){
               min=arr[i][j];
            }
        }
        printf("%d",min);
        arr1[i]=min;

    }
    int max,arr2[colums];
    for(int i=0;i<colums;i++){
        max=arr[0][i];
        for(int j=1;j<rows;j++){   
            if(arr[j][i]>max){
               max=arr[j][i];
            }
        }
        printf("%d\n",max);
        arr2[i]=max;
    }
    int count=0;
    for(int i=0;i<rows;i++){
        for(int j=0;j<colums;j++){
            if(arr[i][j]==arr1[i] && arr[i][j]==arr2[j]){
                 count++;
            }
    }
}
     printf("%d",count);
    return 0;
}