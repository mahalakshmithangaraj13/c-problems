#include<stdio.h>
int main(){
    int n,units,sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&units);
        sum=sum+units;       
    }
    printf("Total Units:%d",sum);
    return 0;
}