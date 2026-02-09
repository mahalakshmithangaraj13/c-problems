#include<stdio.h>
int main(){
    int temp;
    scanf("%d",&temp);
    if (temp<22){
        printf("Heating Mode");
    }
    else if (temp>22 && temp<30){
        printf("Normal Mode");
    }
    else 
    printf("Cooling Mode");
    return 0;
}