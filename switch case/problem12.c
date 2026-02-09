#include<stdio.h>
int main(){
    int vehicle,trip;
    scanf("%d\n%d",&vehicle,&trip);
switch (vehicle)
{
case 1:
    if(trip<30){
        if(trip==1){
            printf("Rs:100");
        }
        if(trip>=10){
            printf("Rs:800");
        }
    }
    break;
case 2:
    if(trip<30){
        printf("Rs:%d",trip*240);
    }
    break;
default:
    printf("Invalid");
}
}