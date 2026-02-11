#include<stdio.h>
int main(){
    int n,p,i,result=1;
    scanf("%d\n%d",&n,&p);
    for(i=1;i<=p;i++){    
        result=result*n;
    }
    printf("%d",result);
    
    return 0;
}