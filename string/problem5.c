#include<stdio.h>
#include<string.h>
int main(){
    char str[20];
    int i,palindrome=1;
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    int len =strlen(str);
    for(i=0;i<len/2;i++){
        if(str[i]!=str[len-i-1]){
            palindrome=0;
            break;
        }
    }
    if(palindrome){
        printf("Palindrome");
    }
    else{
        printf("Not a Palindrome");
    }
    return 0;
}
