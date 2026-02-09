#include<stdio.h>
int main(){
    int vehicleType,hours;
    scanf("%d\n%d",&vehicleType,&hours);
switch (vehicleType)
{
case 1:
    printf("Parking fee Rs:%d",hours*10);
    break;
case 2:
printf("Parking fee Rs:%d",hours*20);
break;
default:
    printf("Parking fee Rs:%d",hours*20);

} 
}