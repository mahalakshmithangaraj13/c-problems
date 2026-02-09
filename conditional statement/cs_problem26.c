#include<stdio.h>
int main(){
    int salary;
    scanf("%d",&salary);
    if (salary>30000){
        printf("Bonus Eligible");
    }
    if(salary<=30000){
        printf("not eligible");
    }
}