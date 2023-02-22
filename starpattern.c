#include <stdio.h>
int main(){
    int i,n,j;
    printf("enter the number:");
    scanf("%d",&n);
    for(i=1;i<n;i++){
        for(j=0;j<i;j++){
            printf("*");
        }
    printf("\n");}
    return 0;
    
}