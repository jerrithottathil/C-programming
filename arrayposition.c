#include <stdio.h>
int main(){
    int a[100],i,limit,k,flag=0;
    printf("enter the limit of array:");
    scanf("%d",&limit);
    for (i=0;i<limit;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the number to search:");
    scanf("%d",&k);
    for (i=0;i<limit;i++){
       if(k==a[i]){
        flag=1;
        break;
       }
    }
       if(flag==1){
        printf("value is found at %d position",i+1);
       }
       else{
        printf("not found");
       }
   
}