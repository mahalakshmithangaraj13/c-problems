#include<stdio.h>
#include<string.h>
int main(){
    char str[20];
    char letter;
    int index=-1;
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    scanf("%c",&letter);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==letter){
               index=i;
               break;
        }      
    }
   printf("%d",index);
    return 0;
}