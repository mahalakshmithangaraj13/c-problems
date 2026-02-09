#include<stdio.h>
int main(){
    int amount,Speed_type;
    scanf("%d\n%d",&amount,&Speed_type);
    int normal=50;
    int fast=100;
switch (Speed_type)
{
case 1:
    printf("Delivery Rs:%d",normal);;
    break;
case 2:
   if(amount<1000){
    printf("Delivery Rs:%d",fast);
   }
   if(amount>=1000){
    printf("Free");
   }
   break;
default:
    printf("Invalid");
    break;
}
}