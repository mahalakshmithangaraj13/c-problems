#include<stdio.h>
#include<math.h>
int armstrong(int num){
    int input=num,rem,sum=0;
    while(input>0){
        rem=input%10;
        sum+=(rem*rem*rem);
        input=input/10;
    }
     if(num==sum){
        return 1;
     }
     else{
         return 0;
     }
    }  
int main(){
    int num;
    scanf("%d",&num);
    if(armstrong(num)){
        printf("Armstrong");
    }
    else{
        printf("Not Armstrong");
    }
    return 0;
}