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
    int evencount,oddcount,count=0,index=0;
    for(int i=0;i<rows;i++){
         evencount=0;
         oddcount=0;
         for(int j=0;j<colums;j++){
            if(arr[i][j]%2==0){
                evencount++;
            }
            else{
                oddcount++;
            }
         }
         if(evencount==oddcount){
            count++;
         }
        
    }
     printf("%d",count);
    return 0;
}