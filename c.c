#include <stdio.h>

// Function to calculate the sum of digits of a number
int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;  // Add the last digit to sum
        num /= 10;        // Remove the last digit
    }
    return sum;
}

// Function to find how many times to apply the spell until the number becomes a single-digit
int countDigitSumSteps(int num) {
    int steps = 0;

    // Continue applying the spell until num becomes a single-digit number
    while (num >= 10) {
        num = sumOfDigits(num);  // Apply the spell (calculate sum of digits)
        steps++;                 // Count the step
    }

    return steps;
}

int main() {
    int n;

    // Read the input number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Find and print the number of steps required
    int steps = countDigitSumSteps(n);
    printf("Number of times the spell can be applied: %d\n", steps);

    return 0;
}
