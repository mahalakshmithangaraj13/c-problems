#include<stdio.h>
int main(){
    int fuel,n,feulPerTrip;
    int i=1,count=0;
    scanf("%d\n%d",&fuel,&n);
    while(i<=n){
        scanf("%d",&feulPerTrip);
        if(fuel<feulPerTrip){
            break;
        }
        count++;
        fuel=fuel-feulPerTrip;
        
        
        i++;
    }
    printf("Completed Trips:%d\n",count);
    printf("Remaining Fuel:%d",fuel);
    return 0;
}