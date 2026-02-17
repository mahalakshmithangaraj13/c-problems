#include<stdio.h>
int main(){
    int n,overtime,i=1,total=0,count=0;
    scanf("%d",&n);
    while(i<=n){
        scanf("%d",&overtime);
        total=total+overtime;
        if(overtime>4){
            count++;
        }
        i++;
    }
    printf("Total Overtime:%d\n",total);
    printf("Burnout Days:%d",count);
    return 0;
}