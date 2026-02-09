#include<stdio.h>
int main(){
    int account_type,year;
    scanf("%d\n%d",&account_type,&year);
    switch (account_type)
    {
    case 1:
        if(year>0)
        {   
            printf("Interest 4%%");
        }
    break;
    case 2:
     if (year<=3)
     {printf("Interest 5%%");
        }
        if (year>3){
            printf("Interest 7%%");
        }
    break;
    default:
    printf("Invalid");
        break;
    }
}