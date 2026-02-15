#include<stdio.h>
int main(){
    int n,balance,transaction,final_balance;
    int count=0,i=1;
    scanf("%d\n%d",&n,&balance);
    while(i<=n){
        scanf("%d",&transaction);
        final_balance=balance+transaction;
        if(transaction<2000){
            count++;
        }
        i++;
    }
    printf("Final Balance %d\n",balance);
    printf("Low Balance Days %d",count);
}