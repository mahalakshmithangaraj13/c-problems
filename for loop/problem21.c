#include<stdio.h>
int main(){
    int passengers,ticket,sum=0;
    scanf("%d",&passengers);
    for(int i=1;i<=passengers;i++){
       scanf("%d",&ticket);
       sum=sum+ticket;
    }
    printf("Total Collection:%d",sum);
    return 0;
}