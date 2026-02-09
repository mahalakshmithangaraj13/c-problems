#include<stdio.h>
int main(){
    int code,experience;
    scanf("%d\n%d",&code,&experience);
    int developer=50000,tester=35000;
switch(code){
    case 1:
    if(experience>=3){
        int bonus=experience*5000;
        printf("Salary Rs:%d",bonus+developer);
    }
    else
    printf("Salary Rs:%d",developer);
    break;
    case 2:
    if(experience>=3){
        int bonus=experience*5000;
        printf("Salary Rs:%d",bonus+tester);
    }
    else
    printf("Salary Rs:%d",tester);
    break;
default:
printf("Invalid");
}
}