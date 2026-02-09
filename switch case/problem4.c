#include<stdio.h>
int main(){
    int class,age;
    scanf("%d\n%d",&class,&age);
switch(class){
    case 1:
    if(age>=60){
        int discount=(300*33)/100;
        int result=(300-discount);
        printf("Fare Rs:%d",result);
    }
    break;  
case 2:
    if(age<12){
        int discount=(1000*50)/100;
        int result=(1000-discount);
        printf("Fare Rs:%d",result);
    }
    break;
    default:
    printf("Invalid");
}
return 0;
}