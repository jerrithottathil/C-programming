#include <stdio.h>
//here return value is also initaited which means after the argument fumntion the final v
//alue of c is return c; which mean recalled the function so the vlaue will return to the place where sum is called and if
 //we equate it with a variable as d=sum(a,b) the value of c will be assigned to d variable
int sum(int,int);
int main(){
    int a,b,d;
    printf("enter two numbers:");
    scanf("%d%d",&a,&b);
d= sum(a,b);
printf("sum is %d",d);


return 0;
}
int sum(int a,int b){
    int c;
c=a+b;
return c;

}