#include<stdio.h>
int main(){
    int planType;
    float data;
    scanf("%d\n%f",&planType,&data);
switch ( planType)
{
case 1:
if (data>0.0 && 5.0)
    {if(data<=1){
        printf("Normal Speed");
    }
    else{
        printf("Speed Reduced");
    }}
    break;
case 2:
if (data>0.0 && 5.0)
    {if(data<=2){
        printf("Normal Speed");
    }
    else{
        printf("Extra Charges Applied");
    }}
    break;
    
default:
    break;
}

}