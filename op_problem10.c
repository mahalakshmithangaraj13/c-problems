#include<stdio.h>
int main(){
    int num1;
    scanf("%d",&num1);
    printf("pre:%d ",++num1);
    printf("post:%d",num1++);
    return 0;
}