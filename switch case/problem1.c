#include<stdio.h>
int main(){
    int type,units;
    scanf("%d %d",&type,&units);
switch (type){
    case 1:
    if (units<100){
        printf("Bill:Rs.%d",units*3);
    }
    if (units>100){
        int second_units=(units-100);
        int result_1= second_units*5;
        units=units-second_units;
        int result= result_1+(units*3)-80;
        printf("Bill:Rs.%d",result);
    }
    break;
    case 2:
    if (units<100){
        printf("%d",units*7);
    }
    if (units>100){
        int second_units=(units-100);
        int result_1= second_units*10;
        units=units-second_units;
        int result= result_1+(units*7);
        printf("Bill:Rs.%d",result);
    }
    break;
    default:
     printf("Invalid");
}
}