#include<stdio.h>
void gcd(int num1,int num2){
        int result=1;
        for(int i=1;i<=num1 && i<=num2;i++){
            if(num1%i==0 && num2%i==0){
                result=i;
            }
        }
        printf("%d",result);
}
int main(){
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    gcd(num1,num2);
}