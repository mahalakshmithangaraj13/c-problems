#include<stdio.h>
int main(){
    int ticket;
    scanf("%d",&ticket);
    if (ticket>0){
        printf("Confirmed");
    }
    else{
        printf("Waiting List");
    }
    return 0;
}