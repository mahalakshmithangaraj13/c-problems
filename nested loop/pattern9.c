#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for (int j=1;j<=n-i;j++){
            printf(" ");
        }
        for (int k=1;k<=i*2-1;k++){
        printf("*");}
        printf("\n");}
    for(int i=n;i>0;i--){
        for (int l=1;l<=n-i;l++){
            printf(" ");
        }
        for (int m=1;m<=i*2-1;m++){
        printf("*");}
        printf("\n");
        }
    return 0;
}