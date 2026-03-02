#include<stdio.h>
#include<string.h>
int main(){
    char str1[20];
    char str2[20];
    int i=0;
    fgets(str1,sizeof(str1),stdin);
    str1[strcspn(str1,"\n")]='\0';
    while(str1[i]!='\0'){
        str2[i]=str1[i];
        i++;
    }
    str2[i]='\0';
    printf("%s",str2);
    return 0;
}