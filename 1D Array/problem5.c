#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n-1;i++){
        scanf("%d",&arr[i]);  
    }
    int given_sum=0;
    for(int i=0;i<n-1;i++){
    given_sum=given_sum+arr[i];}
    int sum=0;
    for(int i=0;i<=n;i++){
        sum=sum+i;
    }
    printf("%d",sum-given_sum); 
    return 0;
}
    