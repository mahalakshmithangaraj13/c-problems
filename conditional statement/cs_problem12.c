#include<stdio.h>
int main(){
   int mark;
   scanf("%d",&mark);
   if(mark<=100 && mark>=90){
    printf("A");
   }
   else if(mark>=75 && mark<90){
    printf("B");
   } 
   else if(mark<75 && mark>=50){
    printf("C");
   }
else
{
    printf("F");
}
}