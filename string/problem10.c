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
    int product,arr1[rows];
    int high=0,index=0;
    for(int i=0;i<rows;i++){
        product=1;
        for(int j=0;j<columns;j++){
            product*=arr[i][j];
        }
        if(product>high){
           high=product;
           index=i;
        }
}
    printf("%d",index);
}