#include<stdio.h>
int main(){
    int user,loginTime;
    scanf("%d\n%d",&user,&loginTime);
switch ( user)
{
    case 1:
            printf("Full access anytime");
        break;
    case 2:
    if (loginTime>9 && loginTime<18){
        printf("Limited Access");
    }
    else
    printf("Access Denied");
    break;
    default:
    printf("Invalid");
}
}