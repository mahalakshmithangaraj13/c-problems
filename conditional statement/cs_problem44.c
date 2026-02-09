#include<stdio.h>
int main(){
    int mark;
    scanf("%d",&mark);
    if (mark>=85 && mark<=100){
        printf("Distinction");
    }
    else if(mark<85 && mark>=35){
        printf("Pass");
    }
    else
    printf("Fail");
    return 0;
}