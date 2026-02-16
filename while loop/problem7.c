#include<stdio.h>
int main(){
    int capacity,n,beds;
    int i=1,count=0,total=0,occupy;
    scanf("%d\n%d",&capacity,&n);
    while(i<=n){
       scanf("%d",&beds);
        total=total+beds;
        int occupy=(capacity*90)/100;
        if(total>occupy){
            count++;
        }
       i++;
    }
    printf("Final Occupied Beds: %d\n",total);
    printf("Critical Hours: %d",count);
    return 0;
}