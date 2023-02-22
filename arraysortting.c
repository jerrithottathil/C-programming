#include <stdio.h>
int main(){
    int a[100],i,limit,j,temp=0;
    printf("enter the limit of array:");
    scanf("%d",&limit);
    for (i=0;i<limit;i++){
        scanf("%d",&a[i]);
    }
   for(i=0;i<limit;i++){
    for(j=i+1;j<limit;j++){
        if(a[i]>a[j]){
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        }
    }
   }
   printf("sortted values are:");
   for(i=0;i<limit;i++){
   printf("%d\t",a[i]);
   }

 return 0;  
}