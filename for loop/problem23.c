#include<stdio.h>
int main(){
  int n,loss,count=0,sum=0;
  scanf("%d",&n);
for(int i=1;i<=n;i++){
    scanf("%d",&loss);
    sum=sum+loss;
    if(loss>100){
        count++;
    }
}
  printf("Total Loss: %d\n",sum);
  printf("High Loss Days: %d",count);
}