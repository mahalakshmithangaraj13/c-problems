#include<stdio.h>
int main(){
    int weeks,n,i=1,count=0,max=0;
    scanf("%d",&n);
    while(i<=n){
        scanf("%d",&weeks);
        if(weeks==0){
            count++;  
            }
    i++;
    }
    printf("Inactive Weeks:%d\n",count);
    if(count>0){
        printf("Risk Status:High");
    }
    else{
        printf("Risk Status:Low");
    }
    return 0;
}