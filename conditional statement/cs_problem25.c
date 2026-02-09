#include<stdio.h>
int main(){
    int a,b;
    int choice;
    scanf("%d\n",&choice);
    scanf("%d %d",&a,&b);  
    switch(choice){
        case 1:
        printf("Sum = %d",a+b);
        break;
        case 2:
        printf(" Differnce = %d",a-b );
        break;
        case 3:
        printf(" Product = %d",a*b);
        break;
        case 4:
        printf(" Quotient = %d",a/b);
        break;
        case 5:
        printf(" Remainder = %d",a%b);
        break;
        default:
        printf("Invalid");
    }
    return 0;
}