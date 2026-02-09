#include<stdio.h>
int main(){
    int plan,payment;
    scanf("%d\n%d",&plan,&payment);
    int plan_1=199;
    int plan_2=399;
switch (plan)
{
case 1:
    if(payment==11 || payment==12){
       printf("Pay Rs:%d",plan_1-20);
    if(payment==13){
        printf("Pay Rs:%d",plan_1);
    }
    }
    break;
    case 2:
    if(payment==11 || payment==12){
       printf("Pay Rs:%d",plan_2-20);}
    if(payment==13){
        printf("Pay Rs:%d",plan_2);
    break;}
default:
    printf("Invalid");
    break;
}
}