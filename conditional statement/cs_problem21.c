#include<stdio.h>
int main(){
    int a,b;
    char operator;
    scanf("%d %d\n",&a,&b);
    scanf("%c",&operator);
    switch(operator){
        case '+':
        printf("result= %d",a+b);
        break;
        case '-':
        printf("result= %d",a-b );
        break;
        case '*':
        printf("result= %d",a*b);
        break;
        case '/':
        printf(" result= %d",a/b);
        break;
        case '%':
        printf(" result= %d",a%b);
        break;
        default:
        printf("Invalid");
    }
    return 0;
}