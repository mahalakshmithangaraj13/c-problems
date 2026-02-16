#include<stdio.h>
int main(){
    int totaldata,n,data;
    int i=1;
    scanf("%d\n%d",&totaldata,&n);
    while(i<=n){
    scanf("%d",&data);
    n=n+data;
    totaldata=totaldata-n;
    i++;
    }
    printf("Days Used: %d",n);
    printf("Remaining Data: %dGB",totaldata);
    return 0;
}