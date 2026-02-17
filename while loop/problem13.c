#include<stdio.h>
int main(){
    int dataPack,n,dailyUsage;
    int i=0,sum=0,count=0,final;
    scanf("%d\n%d",&dataPack,&n);
    while(i<n){
        scanf("%d",&dailyUsage);
        sum=sum+dailyUsage;
        if(sum<dataPack){              
                count++;
            }
            else{
                count=count+1;
                final=sum-dataPack;
                break;
            }
            i++;
    }
    if(sum<dataPack){
            printf("Exhausted Day:Not Exhausted\n");
            printf("Overused Data:0");
        }
        else{
            printf("Exhausted Day:%d\n",count);
            printf("Overused Data:%d",final);
        } 
        return 0;
    }

