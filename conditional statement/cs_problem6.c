#include<stdio.h>
int main(){
    char let;
    scanf("%c",&let);
    if((let =='a'||let =='A')||(let =='e'||let=='E')||(let=='i'||let=='I')||(let=='o'||let=='O')||(let=='u'||let=='U')){
     printf("Vowel");
    }
    else
    printf("consonants");
    return 0;
}