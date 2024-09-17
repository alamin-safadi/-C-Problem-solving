/**
 * C program to find first digit of a number
 */

#include <stdio.h>

int main()
{
    int n, first,last,sum;

    printf("Enter any number: ");
    scanf("%d", &n);

    first = n;
    last=n%10;

    while(first >= 10)
    {
        first = first / 10;
    }
    sum=first+last;
    printf("First digit = %d\n last digit=%d\n sum=%d",first,last,sum);

    return 0;
}
