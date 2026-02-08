#include<stdio.h>
int main(){
    int num,count=0;
    scanf("%d",&num);
    if (num>0){
        count=count&(num+1);
        num=num>>1;
        printf("%d",num);
    }
    return 0;
}