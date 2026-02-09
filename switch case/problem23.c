#include<stdio.h>
int main(){
    int customerType,billAmount,discount,result;
    scanf("%d\n%d",&customerType,&billAmount);
switch (customerType)
{
case 1:
    discount=(billAmount*5)/100;
    result=billAmount-discount;
    printf("Rs:%d",result);
    break;
case 2:
    discount=(billAmount*15)/100;
    result=billAmount-discount;
    printf("Rs:%d",result);
    break;
default:
printf("Invalid");
    break;
}
}