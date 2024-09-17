#include<stdio.h>
int main(){

int a=4,b=5;
b=a++ + a--;
a=++b+b--;

int x=10;
b=x+1;
int c=b--;
a=-b+c++;
printf("%d,%d,%d\n",a,b,c);
}
