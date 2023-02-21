#include <stdio.h>
int main(){
//prime no. means aaa number konde matram allade vere oru number kondum divisible allaata numbers for example 7, 7 is only divisible by 7 and 1 so 7 is a prime number
    int i,n,flag=0;
    printf("enter the number:");
    scanf("%d",&n);
    for (i=2;i<n;i++){
    if (n%i==0)
    {flag=1;
    break;}
    }
    if (flag==1){
        printf("not prime");}
        else
        {printf("prime");}
    return 0;
}