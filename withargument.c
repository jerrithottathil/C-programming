#include <stdio.h>
//with arguement without return value.. here what happens is that
// when two numbers can be entered and two sum this jsut call sum(arguments), then it will goes to that 
//sum wriiten function to operate the sum.. here we have to note that these two function is different so 
//we can use same variable but to note is that calling function operation is entirely different function..
void sum(int,int);
int main(){
    int a,b;
    printf("enter two numbers:");
    scanf("%d%d",&a,&b);
sum(a,b);
return 0;
}
void sum(int a,int b){
    int c;
c=a+b;
printf("therefore c= %d",c);

}