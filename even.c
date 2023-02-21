#include <stdio.h>
int main(){
    int i,n;
    printf("enter the number:");
    scanf("%d",&n);
    for(i=2;i<n;i++){
    if(i%2==0)
    {printf("\n%d",i);}}
    
    return 0;
}