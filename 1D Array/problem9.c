#include<stdio.h>
int main(){
    int n,k;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
       scanf("%d",&arr[i]);
    }
    int leader;
    for(int i=0;i<n;i++){
       for(int j=i+1;j<n;j++){
         if(arr[j]>=arr[i]){
         leader=0;
         break;
       }
       leader=1;
      }
      
   if(leader){
      printf("%d ",arr[i]);
   }
}
    return 0;
}