#include<stdio.h>
int main(){
    int letter;
    scanf("%d",&letter);
    if (letter>=5){
        printf("Valid Email");
    }
    else{
        printf("Invalid Email");
    }
    return 0;
}