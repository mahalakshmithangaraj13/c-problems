#include<stdio.h>
int main(){
    int attempt,marks;
    scanf("%d\n%d",&attempt,&marks);
switch (attempt)
{
case 1:
if (marks>0 && marks<=100){
    if(marks>=80){
        printf("excellent");}
    else
    printf("Not Qualified");
    }
    break;
case 2:
if (marks>0 && marks<=100){
    if(marks>=60){
        printf("Good");}
    else
    printf("Not Qualified");
    }
    break;
case 3:
    if (marks>0 && marks<=100){
    if(marks<=60)
        printf("Need Improvement");
    }
    break;
default:
printf("Invalid");
}
}