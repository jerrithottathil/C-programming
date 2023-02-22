#include <stdio.h>
int main(){
    int a[100],i,limit;
    printf("enter the limit of array:");
    scanf("%d",&limit);
    for (i=0;i<limit;i++){
        scanf("%d",&a[i]);
    }
    printf("entered limits are:");
    for (i=0;i<limit;i++){
        printf("%d\t",a[i]);
    }
    return 0;
}