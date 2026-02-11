#include<stdio.h>
int main(){
  int day,error,count=0,sum=0;
  scanf("%d",&day);
for(int i=1;i<=day;i++){
    scanf("%d",&error);
    sum=sum+error;
    if(error>50){
        count++;
    }
}
  printf("Total Errors: %d\n",sum);
  printf("Critical Hours: %d",count);
}