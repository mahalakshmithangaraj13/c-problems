#include<stdio.h>
int main(){
    int vehicle,age;
    scanf("%d\n%d",&vehicle,&age);
switch(vehicle){
    case 1:
    if (age>0 && age<20)
   { if (age<=5){
        printf("Rs:1500");
    }
    if(age>5){
        printf("Rs:2500");
    }}
    break;
    case 2:
    if (age>0 && age<20)
   { if (age<=5){
        printf("Rs:400");
    }
    if(age>5){
        printf("Rs:6000");
    }}
    break;
}
}