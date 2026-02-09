#include<stdio.h>
int main(){
    int digit;
    scanf("%d",&digit);
    if (digit>=100 && digit<=999){
            printf("Three-digit number");
    }
    else
    printf("its not a three-digit number");
    return 0;}
