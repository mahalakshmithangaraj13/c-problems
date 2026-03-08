#include<stdio.h>
void calculator(int a,int b,char specialchar){
    switch(specialchar){
        case '+':
        printf("Addition");
        break;
        case '-':
        printf("Subtraction");
        break;
        case '*':
        printf("Multiplication");
        break;
        case '/':
        printf("Divison");
        break;
        default:
          printf("Invalid");
    }
}
int main(){
    int a,b;
    char specialchar;
    scanf("%d %d",&a,&b);
    scanf("%s",&specialchar);
    calculator(a,b,specialchar);
    return 0;
}