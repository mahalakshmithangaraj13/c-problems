#include<stdio.h>
void reverse(int num){
    int result=0,rem;
    while(num!=0){
        rem=num%10;
        result=result*10+rem;
        num=num/10;
    }
    printf("%d",result);
} 
int main(){
    int num;
    scanf("%d",&num);
     reverse(num);
    return 0;
}