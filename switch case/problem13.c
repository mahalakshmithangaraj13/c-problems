#include<stdio.h>
int main(){
    int loanType,credit;
    scanf("%d\n%d",&loanType,&credit);
switch (loanType)
{
case 1:
    if(credit>300 && credit<900){
        if(credit>=700){
            printf("Approved");
        }
        if (credit>650 && credit<700){
            printf("Manual Review");
        }
    }
    break;
case 2:
    if(credit>300 && credit<900){
        if(credit>=700){
            printf("Approved");
        }
        if (credit<700){
            printf("Rejected");
        }
    }
    break;

default:
printf("Invalid");
}
}