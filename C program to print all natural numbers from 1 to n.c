#include<stdio.h>
int main(){
int upperlimit,i;

printf("Enter upper limit:");
scanf("%d",&upperlimit);

for(i=upperlimit; i>=1; i--)
{
    printf("%d\n",i);
}
return 0;
}
