#include<stdio.h>
int main(){
    int total,hours,percentage,sum=0;
    scanf("%d\n%d",&total,&hours);
    for(int i=1;i<=hours;i++){
       scanf("%d",&percentage);
       sum=sum+percentage;
    }
    printf("Remaining Battery:%d%%",total-sum);
    return 0;
}