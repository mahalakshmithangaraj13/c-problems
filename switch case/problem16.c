#include<stdio.h>
int main(){
    int flight_class,weight;
    scanf("%d\n%d",&flight_class,&weight);
switch(flight_class){
    case 1:
      printf("Extra Baggage Charge Rs:%d",weight*300);
    break;
    case 2:
    if (weight==3){
        printf("Free");
    }
    if(weight>3){
    int offer=weight-3;
    int result=(offer*300);
    printf("Extra Baggage Charge Rs:%d",result);
    }
    break;
    default:
    printf("Invalid");
}   
}