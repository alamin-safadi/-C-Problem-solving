#include<stdio.h>
int main(){

int x=10,y=20,sum,temp;
int *d,*f;  //d=address *d=value

d=&x;
f=&y;

sum=*d+*f;
temp=*d;
*d=*f;
*f=temp;
printf("%d + %d= %d",x,y,sum);

}
