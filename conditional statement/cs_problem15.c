#include<stdio.h>
int main(){
    int side1,side2,side3;
    scanf("%d %d %d",&side1,&side2,&side3);
    if (side1=side2=side3){
        int sum=side1+side2+side3;
        if (sum==180){
            printf("Valid Triangle");
        }
    }
     
    return 0;
}