#include<stdio.h>
int main(){
    int units;
    scanf("%d",&units);
    if (units>100){
        int amount=units-100;
        int bill=amount*30;
        printf("%d",bill);
    }
    return 0;
}