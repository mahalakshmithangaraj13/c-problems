#include<stdio.h>
int main(){
  int day,fuel,count=0,low,result;
  scanf("%d",&day);
for(int i=1;i<=day;i++){
    scanf("%d",&fuel);
    if(fuel<low){
        low=fuel;
    }
    if(fuel<210){
        count++;
    }
}
  printf("Minimum Voltage: %d\n",low);
  printf("Low Voltage Events: %d",count);
}