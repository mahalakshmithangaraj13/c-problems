#include<stdio.h>
int main(){
    int num,position;
    scanf("%d %d",&num,&position);
    int result= num ^ (1 << position);
    printf("%d",result);

}