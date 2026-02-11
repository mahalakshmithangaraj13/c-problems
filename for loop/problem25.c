#include<stdio.h>
int main(){
  int data,usage,count=0,sum=0;
  scanf("%d",&data);
for(int i=1;i<=data;i++){
    scanf("%d",&usage);
    sum=sum+usage;
    if(usage>2){
        count++;
    }
}
  printf("Total Data:  %d\n",sum);
  printf("High Usage Days: %d",count);
}