#include<stdio.h>

int main(){
  int day,revenue,count=0,sum=0;
  scanf("%d",&day);
for(int i=1;i<=day;i++){
    scanf("%d",&revenue);
    sum=sum+revenue;
    if(revenue>50000){
        count++;
    }
}
  printf("Total Revenue: %d\n",sum);
  printf("Target Days: %d",count);
}