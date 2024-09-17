#include<stdio.h>
int main(){

int num1,num2;
printf("Enter any two Numbers: ");
scanf("%d%d",&num1,&num2);

if(num1>num2)
{
    printf("Max number is:%d",num1);
}else
{
    printf("Max number is:%d",num2);
}
return 0;
}
