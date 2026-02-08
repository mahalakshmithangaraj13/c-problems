#include<stdio.h>
int main(){
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    int max=(num1>num2)?num1:num2;
    printf("%d",max);
    return 0;
}