#include<stdio.h>
int main(){
  int day,patient,count=0,sum=0;
  scanf("%d",&day);
for(int i=1;i<=day;i++){
    scanf("%d",&patient);
    sum=sum+patient;
    if(patient>100){
        count++;
    }
}
  printf("Total Patients: %d\n",sum);
  printf("Overcrowded Days: %d",count);
}
