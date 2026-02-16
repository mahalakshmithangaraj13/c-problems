#include<stdio.h>
int main(){
    int n,condition;
    int i=1,min=0,Cur_min=0;
    scanf("%d",&n);
    while(i<=n){
        scanf("%d",&condition);
    if(condition==0){
        Cur_min++;
        if(Cur_min>min){
            min=Cur_min;
        }
    }
    else{
       Cur_min=0;
        }
    i++;
    }
    printf("Longest Failure Streak: %d",min);
}