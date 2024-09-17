#include<stdio.h>
int main(){

int n;
int first,last;

printf("Enter any interger:");
scanf("%d",&n);

last=n%10;
first=n;
while(n>=10){
    first=first/10;
    first++;
}
printf("first:%d\nlast:%d\n",first,last);
}
