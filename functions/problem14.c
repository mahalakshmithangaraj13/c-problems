#include<stdio.h>
void perfect(int num){
    int sum=0;
    for(int i=1;i<num;i++){
        if(num%i==0){
            sum=sum+i;
        }
    }
        if(sum==num){
            printf("Perfect Number");
        }
        else{
            printf("Not a perfect Number");
        }
}
int main(){
    int num;
    scanf("%d",&num);
    perfect(num);
    return 0;
}