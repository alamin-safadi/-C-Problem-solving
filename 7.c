

#include <stdio.h>

int main()
{
    int i, end, sum=0;

    printf("Enter upper limit: ");
    scanf("%d", &end);

    for(i=1; i<=end; i++)
    {
        sum += i;
    }

    printf("Sum of total numbers = %d", sum);

    return 0;
}
