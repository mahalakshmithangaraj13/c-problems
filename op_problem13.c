#include<stdio.h>
int main(){
    int num1,num2;
    scanf("%d",&num1);
    if (num1<10 ||num1>100){
        printf("YES");
    }
    else
    printf("NO");
    return 0;
}