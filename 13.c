#include <stdio.h>
#include <math.h>

int main() {
    int num, first, end, swap, digit, divide, remainingnum;

    printf("Enter any integer: ");
    scanf("%d", &num);

    digit = log10(num);
    divide = pow(10, digit);
    first = num / divide;
    end = num % 10;
    remainingnum = (num % divide) / 10;

    swap = end * divide + remainingnum * 10 + first;

    printf("Number after swapping first and last digit: %d\n", swap);

    return 0;
}
