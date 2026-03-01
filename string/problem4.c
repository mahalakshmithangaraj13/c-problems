#include<stdio.h>
int main(){
    int rows,columns;
    scanf("%d %d",&rows,&columns);
    int arr[rows][columns];
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
    scanf("%d",&arr[i][j]);
        }
    }
    int count,element=0,maxcount=0;
    for(int k=0;k<rows;k++){
        for(int l=0;l<columns;l++){
            count=0;
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            if(arr[k][l]==arr[i][j]){
                 count++;
            }
        }
    if(maxcount<count){
    maxcount=count;
    element=arr[k][l];}
    }
        }
    }
    printf("%d",element);
    return 0;
}