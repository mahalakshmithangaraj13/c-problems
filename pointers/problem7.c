#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    char *p=str;
    int len=strlen(p);
    int ispalindrome=1;
    for(int i=0;i<len/2;i++){
        if(*(p+i)!=*(p+len-1-i)){
            ispalindrome=0;
            break;
        }
    }
    if(ispalindrome){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}