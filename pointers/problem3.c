#include<stdio.h>
#include<string.h>
int main(){
    char str[20];
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    for(int i=0;str[i]!='@';i++){
        printf("%c",str[i]);
    }
    return 0;
}