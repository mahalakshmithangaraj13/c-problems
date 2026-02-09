#include<stdio.h>
int main(){
    int studentCategory;
    scanf("%d",&studentCategory);
switch (studentCategory)
{
case 1:
    printf("Exam Fee Rs:1200");
    break;
case 2:
printf("Exam Fee Rs:800");
break;
case 3:
printf("Exam Fee Rs:500");
break;
default:
    printf("Invalid");
    break;
}
}