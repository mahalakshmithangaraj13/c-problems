#include<stdio.h>
int main(){
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    int bitwise=num1 | num2;
    printf("%d",bitwise);
    return 0;
}