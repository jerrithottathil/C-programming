#include <stdio.h>
for finding even numbers we have to take an if condition with modulos, modulus % means its a reminder 
after division for example if we divie 4%2 the answer will be 2 with reminder zero so we can say that 
alll even numbers will be divisible by 2 and gives reminder zero
int main(){
    int i,n;
    printf("enter the number:");
    scanf("%d",&n);
    for(i=2;i<n;i++){
    if(i%2==0)
    {printf("\n%d",i);}}
    
    return 0;
}
