#include<stdio.h>
void palindrome(int num){
    int rem,result=0;
    int original=num;
    while(num!=0){
        rem=num%10;
        result=result*10+rem;
        num=num/10;
    }
    if(original==result){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
}
int main(){
    int num;
    scanf("%d",&num);
    palindrome(num);
}