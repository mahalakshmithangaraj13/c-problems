#include<stdio.h>
int main(){
  int day,fuel,count=0,high=0,result;
  scanf("%d",&day);
for(int i=1;i<=day;i++){
    scanf("%d",&fuel);
    if(fuel>high){
      high=fuel;
    }
    if(fuel>100){
        count++;
    }
}
  printf("Highest Price: %d\n",high);
  printf("High Price Days: %d",count);
}
