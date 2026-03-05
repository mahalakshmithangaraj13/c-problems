#include<stdio.h>
#include<string.h>
int main(){
    char str1[50],str2[40];
     fgets(str1,sizeof(str1),stdin);
     fgets(str2,sizeof(str2),stdin);
     str1[strcspn(str1,"\n")]='\0';
    char *p=str1;
    char *q=str2;
    while(*p!='\0'){
        p++;
    }
    while(*q!='\0'){
        *p=*q;
        p++;
        q++;
    }
    *p='\0';
    printf("%s",str1);
    return 0;
 }
