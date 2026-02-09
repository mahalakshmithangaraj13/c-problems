#include<stdio.h>
int main(){
    int num1;
    scanf("%d",&num1);
    if (num1>10 && num1<50)
    {
        printf("The number is within the range");
    }
    else
    printf("Invalid");
    return 0;
}