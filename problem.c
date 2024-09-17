#include<stdio.h>
int main(){
int n,p,v,t,count=0;
scanf("%d",&n);

for(int i=0;i<n;i++){
    scanf("%d%d%d",&p,&v,&t);
    int k=p+v+t;
    if(k>=2){
        count++;
    }
}
printf("%d\n",count);
return 0;
}
