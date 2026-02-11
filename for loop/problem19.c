#include<stdio.h>
int main(){
    int salary,ab,deduction=0;
    scanf("%d\n%d",&salary,&ab);
    for(int i=1;i<=ab;i++){
       deduction=deduction+100;
    }
    printf("Final Salary Rs:%d",salary-deduction);
    return 0;
}