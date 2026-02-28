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
    int product, max=0;
    for(int i=0;i<rows;i++){
        for(int k=i+1;k<rows;k++){
        for(int j=0;j<colums;j++){
            for(int l=0;l<colums;l++){
                product=arr[i][j]*arr[k][l];
            if(product>max){
                max=product;
            }
        }
        }   
    }        
    }
    printf("%d",max);
    return 0;
}