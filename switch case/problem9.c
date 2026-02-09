#include<stdio.h>
int main(){
    int roomType;
    char seasion;
    scanf("%d\n",&roomType);
    scanf("%c",&seasion);
    int peak_a=2500;
    int off_b=2000;
    int peak_c=4000;
    int off_d=3000;
switch (roomType)
{
case 1:
    if(seasion=='A'){
        printf("Rs:%d",peak_a);
    }
    if(seasion=='B'){
        printf("Rs:%d",off_b);
    }   
    break;
case 2:
    if(seasion=='C'){
        printf("Rs:%d",peak_c);
    }
    if(seasion=='D'){
        printf("Rs:%d",off_d);
    }   
    break;
default:
    printf("Invalid");
}
}