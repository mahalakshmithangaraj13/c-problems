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
    int high=0,diff;
    for(int i=0;i<rows;i++){
        for(int j=i+1;j<rows;j++){
        diff=arr1[i]-arr1[i+1];
    
        if(diff<0){
            diff=-diff;
        }
    if(diff>high){
        high=diff;
    }
}
    }
 printf("%d",high);

}