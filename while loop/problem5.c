#include<stdio.h>
int main(){
    int n,orders;
    int i=1,count_1=0,count_0=0;
    scanf("%d",&n);
    while(i<=n){
        scanf("%d",&orders);
        if(orders==1){
            count_1++;
        }
        if(orders==0){
            count_0++;
        }
        i++;
    }
    printf("Successful:%d\n",count_1);
    printf("Cancelled:%d\n",count_0);
    if(count_1>count_0){
            printf("Status:Safe");
        }
    else
    printf("Status:Risk");
 return 0;
}