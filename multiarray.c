#include <stdio.h>
int main(){
    int j,i,a[2][2];
    printf("enter the numbers:");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
        scanf("%d",&a[i][j]);
        }
    }
    printf("entered numbers are:\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
        printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
return 0;

}