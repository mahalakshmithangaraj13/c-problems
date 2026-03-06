#include<stdio.h>
void prime(int num){
    int isprime=1;
    if(num<=1){
        isprime=0;
    }
    for(int i=2;i<num;i++){
        if(num%i==0){
             isprime=0;
             break;
        }
    }
    if(isprime){
        printf("Prime");
    }
    else{
        printf("Not prime");
    }
}
int main(){
    int num;
    scanf("%d",&num);
    prime(num);
}