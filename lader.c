#include <stdio.h>
int main(void)
{
int a,b,choice,result;
printf("enter two numbers");
scanf("%d%d",&a,&b);
printf("1 is addition \n2 is subtraction \n3 is multiplication \n4 is division \n:");
scanf("%d",&choice);

if(choice==1){
    result=a+b;
}
else if(choice==2) {
    result=a-b;
}
else if(choice==3){
    result=a*b;
}
else if(choice==4){
    result=a/b;
}
else {
    printf("Fool");
}
printf("result = %d",result);

    return 0;
}
