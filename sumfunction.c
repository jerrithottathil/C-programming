#include <stdio.h>
void sum();
int main(){
sum();
sum();
return 0;
}
void sum(){
int a,b,c;
printf("enter two numbers");
scanf("%d%d",&a,&b);
c=a+b;
printf("therefore c= %d",c);

}