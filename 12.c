#include<stdio.h>
int main(){
int n,first,last,sum;
printf("enter any integer:");
scanf("%d",&n);

first=n;
last=n%10;
while(first>=10)
{
    first=first/10;
}
sum=first+last;
printf("sum is %d",sum);
}
