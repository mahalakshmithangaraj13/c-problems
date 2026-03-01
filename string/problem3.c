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
    int isunique,count=0;
    for(int i=0;i<rows;i++){
        isunique=1;
        for(int j=0;j<colums;j++){
            if(arr[i][j]==arr[i][j+1]){
                isunique=0;
                break;
            }
        }
        if(isunique==1){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}