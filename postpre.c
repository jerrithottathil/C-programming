#include <stdio.h>
int main(void)
{
    int a,b,c;
    printf("enter a number ;");
    scanf("%d",&a);
    b=++a;
    printf("b and a is %d %d",b,a);
    c=a++;
    printf("\nc and a is %d %d",c,a);

    return 0;
}