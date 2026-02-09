#include<stdio.h>
int main(){
    int callType,minutes;
    scanf("%d\n%d",&callType,&minutes);
switch (callType)
{
case 1:
    printf("Rs:%d",minutes);
    break;
case 2:
printf("Rs:%d",minutes*3);
break;
case 3:
printf("Rs:%d",minutes*10);
break;
default:
    printf("Invalid");
    break;
}
}