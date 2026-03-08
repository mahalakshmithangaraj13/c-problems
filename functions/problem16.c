#include<stdio.h>
int fibonacci(int num){
    int first=0;
    int second=1;
    if(1<=num){
        printf("%d ",first);
    }
    if(2<=num){
        printf("%d ",second);
    }
    for(int i=2;i<num;i++){
        int temp=first+second;
        first=second;
        second=temp;
        printf("%d ",temp);
    }
    return 0;
}
int main(){
    int num;
    scanf("%d",&num);
    fibonacci(num);
    return 0;
}