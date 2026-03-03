#include<stdio.h>
#include<string.h>
int main(){
    char str1[50],str2[40];
     fgets(str1,sizeof(str1),stdin);
     str1[strcspn(str1,"\n")]='\0';
     char *p=str1;
    char *q=str2;
    while(*p!='\0'){
        *q=*p;
        p++;
        q++;
    }
    *q='\0';
    printf("%s",str2);
    return 0;
 }
