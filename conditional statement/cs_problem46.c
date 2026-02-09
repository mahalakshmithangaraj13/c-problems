#include<stdio.h>
int main(){
    int User;
    scanf("%d",&User);
    switch(User)
    {
    case 1:
         printf("Admin");
        break;
     case 2:
         printf("User");
        break;
    case 3:
        printf("Guest");
        break;
    default:
        printf("Invalid");
        break;
    }
    return 0;
}