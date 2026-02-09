#include<stdio.h>
int main(){
    char letter;
    scanf("%c",&letter);
    if(letter>='0' && letter<='9'){
        printf("Digit");
    } 
    else if ((letter>='a' && letter<='z') ||(letter>='A' && letter<='Z')){
    printf( "Alphabet");
    }
     else{
        printf("Special character");
     }

    return 0;
}