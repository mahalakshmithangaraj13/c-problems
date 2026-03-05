#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")] = '\0';
    char *p = str;
    int count = 0;
    while(*p != '\0'){
        while(*p == ' '){
            p++;
        }
        if(*p != '\0'){
            count++;
            while(*p != ' ' && *p != '\0'){
                p++;
            }
        }
    }
    printf("%d",count);
    return 0;
}