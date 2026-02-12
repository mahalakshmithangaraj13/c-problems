#include<stdio.h>
int main(){
  int n,marks,count=0,sum=0,average;
  scanf("%d",&n);
for(int i=1;i<=n;i++){
    scanf("%d",&marks);
    sum=sum+marks;
    average=sum/n;
    if(marks<40){
        count++;
    }
}
  printf("Average Score: %d\n",average);
  printf("Failed Subjects: %d",count);

}
