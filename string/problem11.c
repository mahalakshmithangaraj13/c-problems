#include<stdio.h>
#include<string.h>
int main(){
    char str[20];
    int count=0;
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>='0' && str[i]<='9'){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}