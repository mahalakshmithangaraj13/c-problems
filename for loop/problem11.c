#include<stdio.h>
int main(){
    int n,rem,result=0;
    scanf("%d",&n);
    for(;n!=0;n/=10){
        rem=n%10;
        result=result+rem;
    }
     printf("%d ",result);          
    return 0;}