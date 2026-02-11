#include<stdio.h>
int main(){
  int n,expenses,count=0,sum=0;
  scanf("%d",&n);
for(int i=1;i<=n;i++){
    scanf("%d",&expenses);
    sum=sum+expenses;
    if(expenses>1000){
        count++;
    }
}
  printf("Total Expenses: %d\n",sum);
  printf("Overspend days: %d",count);
}