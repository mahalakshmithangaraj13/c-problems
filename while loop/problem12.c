#include<stdio.h>
int main(){
    int n,power,i=1,count=0,high=0;
    scanf("%d",&n);
    while(i<=n){
        scanf("%d",&power);
        if(power>high){
            high=power;
        }
        if(power>5){
            count++;
        }
    i++;   
    }
    printf("Max Usage:%d\n",high);
    printf("Surge Hours:%d",count);
    return 0;
}