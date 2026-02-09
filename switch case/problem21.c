#include<stdio.h>
int main(){
    int seatType,showTime;
    scanf("%d\n%d",&seatType,&showTime);
    int gold=250;
    int silver=150;
switch (seatType)
{
case 1:
     if (showTime>=18){
        printf("Ticket price Rs:%d",silver+50);}
     else
     printf("Ticket price Rs:%d",silver);
     
    break;
case 2:
     if (seatType>=18){
        printf("Ticket price Rs:%d",gold+50);}
     else
     printf("Ticket price Rs:%d",gold);
    break;

default:
    printf("Invalid");
    break;
}
}