#include<stdio.h>
int main(){
    char ab;
    scanf("%c",&ab);
    if (ab>='0' && ab<='9'){
        printf("Digit");
    }
    else
    {
        printf("Its not a digit");
    }
    return 0;
}