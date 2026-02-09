#include<stdio.h>
int main(){
    int atten_percentage;
    scanf("%d",&atten_percentage);
    if (atten_percentage>=75){
        printf("Eligible for Exam");
    }
    else{
        printf("Not Eligible");
    }
    return 0;
}