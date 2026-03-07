#include<stdio.h>
void table(int num){
    int result;
    for(int i=1;i<=10;i++){
        int result=num*i;
        printf("%dx%d=%d\n",num,i,result);
    }
}
int main(){
    int num;
    scanf("%d",&num);
    table(num);
    return 0;
}