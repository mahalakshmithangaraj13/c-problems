#include<stdio.h>
int isvowel(char*s){
    int count=0;
    while(*s!='\0'){
         {if(*s=='a'||*s=='e'||*s=='i'||*s=='u'
        ||*s=='A'||*s=='E'||*s=='I'||*s=='O'||*s=='U'||*s=='o')
            count++;
        }
        s++;
    }
    return count;
}
int main(){
    char str[40];
    fgets(str,sizeof(str),stdin);
    char *p=str;
    int result=isvowel(p);
    printf("%d",result);
    return 0;
}
