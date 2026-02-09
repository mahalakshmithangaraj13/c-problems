#include<stdio.h>
int main(){
    int account,balance,withdrawel;
    scanf("%d\n%d\n%d",&account,&balance,&withdrawel);
    switch (account)
    {
    case 1:
        if (balance>withdrawel){
            printf("Transction Successfull");
        }
        else{
            printf("Transaction Rejected");
        }
    break;
    case 2:
    if (withdrawel<5000){
        printf("Transction Successfull");
    }
    else{
        printf("Limit Exceeded");
    }
    break;
    default:
    printf("Invalid");
        break;
    }
}