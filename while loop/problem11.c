#include<stdio.h>
int main(){
    int n,hours,i=1,total=0,count=0;
    scanf("%d",&n);
    while(i<=n){
        scanf("%d",&hours);
        total=total+hours;
        if(hours>2){
            count++;
        }
        i++;
    }
   printf("Total Delay:%d\n",total);
   printf("Delayed Days:%d",count);
}