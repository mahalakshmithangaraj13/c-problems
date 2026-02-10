#include<stdio.h>
int main(){
    int n,result;
    scanf("%d",&n);
    for(;n!=0;n/=10){
        int rem=n%=10;
        result=result*10+rem;
    printf("%d ",result);    
    }
    
    return 0;
}