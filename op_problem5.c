#include<stdio.h>
int main(){
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    int remainder=num1%num2;
    printf("%d",remainder);
    return 0;
}