#include<stdio.h>
int main(){

int num,reverse=0;

printf("enter any integer:");
scanf("%d",&num);

while(num!=0)
{
    reverse=(reverse*10)+(num%10);
    num/=10;
}
printf("Reverse =%d",reverse);
}
