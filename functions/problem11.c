#include<stdio.h>
void digit(int num){
    int count=0;
    if(num==0){
            count++;
        }
    while(num>0){
            count++;
         num=num/10;
    }
    printf("%d",count);
}
int main(){
    int num;
    scanf("%d",&num);
    digit(num);
    return 0;
}