#include<stdio.h>
int main(){
    int maxWeight,n,pasWeight;
    int i=1,total=0,count=0;
    scanf("%d\n%d",&maxWeight,&n);
    while(i<=n){
      scanf("%d",&pasWeight);
      total=total+pasWeight;
      if(total>maxWeight) {
          break;
      } 
      count++;
      i++;}
printf("Passengers Allowed:%d\n",count);
if(total>maxWeight){
    printf("Overload:Yes");
}
else
printf("Overload:No");
return 0;
}