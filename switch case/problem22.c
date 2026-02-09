#include<stdio.h>
int main(){
    int connectionType,units;
    scanf("%d\n%d",&connectionType,&units);
switch (connectionType)
{
case 1:
    if(units<30){
        printf("Rs:%d",units*5);
    }
    if(units>30){
        int offer=units-30;
        int result=(offer)*8+(units-offer)*5;
        printf("Rs:%d",result);
    }
    break;
case 2:
   printf("Rs:%d",units*10);
   break;
default:
    printf("Invalid");
}
return 0;
}