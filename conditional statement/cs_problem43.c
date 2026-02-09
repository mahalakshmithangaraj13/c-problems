#include<stdio.h>
int main(){
    int cart_valuse;
    scanf("%d",&cart_valuse);
    if (cart_valuse>=499){
        printf("Free Delivery");
    }
    else{
        printf("Delivery Charges Apply");
    }
    return 0;
}