#include<stdio.h>
int main(){
    int month,n;
    scanf("%d",&n);
    int i=1,count=0,streak=0;
    while(i<=n){
        scanf("%d",&month);
        if(month==0){
            count++;
            if(count>streak){
                streak=count;
            }
        }
        else{
            count=0;
        }
        i++;
    }
    printf("Longest Default Streak:%d",streak);
    return 0;
}