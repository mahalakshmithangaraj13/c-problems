#include<stdio.h>
#include<string.h>
int main(){
    char str[20];
    int uppercase=0;
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>='A' && str[i]<='Z'){
            uppercase=1;
            break;
        }
    }
    if(uppercase){
        printf("Valid password\n");
    }
    else{
        printf("Invalid password");
    }
    return 0;
}