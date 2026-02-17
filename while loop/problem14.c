#include<stdio.h>
int main(){
    int ATMcash,n,withdraw;
    int i=1,count=0;
    scanf("%d\n%d",&ATMcash,&n);
    while(i<=n){
        scanf("%d",&withdraw);
        if(withdraw<=ATMcash){
            count++;
            ATMcash=ATMcash-withdraw;
        }
        else{
            break;
        }
        i++;
    }
    printf("Successful Withdrawals:%d\n",count);
    printf("Remaining Cash:%d",ATMcash);
}