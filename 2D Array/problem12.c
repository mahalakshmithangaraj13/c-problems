#include<stdio.h>
int main(){
    int rows,colums;
    scanf("%d %d",&rows,&colums);
    int arr[rows][colums];
    int maxcount=0,number;
    for(int i=0;i<rows;i++){
        for(int j=0;j<colums;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<colums;j++){
            int count=0;    
    for(int k=0;k<rows;k++){
        for(int l=0;l<colums;l++){
            if(arr[i][j]==arr[k][l]){
                count++;
            }
        }
    }
    if(count>maxcount){
        maxcount=count;
        number=arr[i][j];
    }
        }
    }
    printf("%d",number);
    return 0;
}