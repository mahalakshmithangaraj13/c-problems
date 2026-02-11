#include<stdio.h>
int main(){
    int n,withdraw,sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&withdraw);
        sum=sum+withdraw;       
    }
    if(sum<10000){
            printf("Approved");
        }
    else
    printf("Limit Exceeded");
    return 0;
}