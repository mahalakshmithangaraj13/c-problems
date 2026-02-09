#include<stdio.h>
int main(){
    int ac_balance;
    scanf("%d",&ac_balance);
    if (ac_balance<1000){
        printf("Low Balance");
    }
    else{
        printf("Sufficient Balance");
    }
    return 0;
}