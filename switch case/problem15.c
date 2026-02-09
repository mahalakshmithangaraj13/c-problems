#include<stdio.h>
int main(){
    int courseMode;
    char student;
    scanf("%d\n%c",&courseMode,&student);
switch (courseMode)
{
case 1:
    if (student=='R'){
        printf("Rs:5000");
    }
    if (student=='S'){
        printf("Rs:3000");}
    break;
case 2:
    if (student=='R'){
        printf("Rs:9000");
    }
    if (student=='S'){
        printf("Rs:7000");}
    break;
default:
printf("Invalid");
    break;
    }
}
