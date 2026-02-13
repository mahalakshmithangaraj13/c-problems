#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    char alphabet='A';
    for (int i=1;i<=n;i++){
        for(int j=0;j<=n-i;j++){
            printf(" ");}
        for(int k=0;k<i;k++){
            printf("%c",'A'+ k);
        }
        for(int k=i-2;k>=0;k--){
            printf("%c",'A'+ k);
        }
        printf("\n");
    }
    return 0;
    }