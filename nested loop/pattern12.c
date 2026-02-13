#include<stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for (int j=1;j<=i;j++){
            printf("%d",j);}
        for(int s=1;s<=2*(n-i);s++){
            printf(" ");
        }
        for (int k=i;k>=1;k--){
            printf("%d",k);
        }
          printf("\n");
        
    }      
    return 0;
}