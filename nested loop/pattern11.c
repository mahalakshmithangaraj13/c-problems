#include<stdio.h>
int main(){
    int n,value=1;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        if(i%2!=0){
            printf("1");}
        else{
            printf("0");
        }
        
        for(int j=1;j<=i-1;j++){
            if((i+j)%2==0){
                printf("0");
            }
            else
            printf("1"); 
          
        }
        printf("\n");
}
    return 0;
}