#include<stdio.h>
int main()
{
    int n;
    printf("Enter uppet limit: ");
    scanf("%d",&n);
    int i=n;
    while(i>=1)
    {
        printf("%d",i);
        i--;
    }
    return 0;
}
