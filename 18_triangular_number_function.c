// // Question 18: Calculate the Triangular Number Using a Function

// The program should:
// 1. Accept an integer n from the user.
// 2. Create a function int triangular(int n) that calculates the sum of all integers from 1 to n.
// 3. Return 0 if n is less than or equal to zero.
// 4. Display the calculated triangular number.

#include <stdio.h>

int triangular(int n)
{
    int i = 1, sum = 0;

    if (n <= 0)
        return 0;

    do
    {
        sum = sum + i;
        i++;
    }
    while (i <= n);

    return sum;
}

int main()
{
    int n, result;

    printf("Enter an integer: ");
    scanf("%d", &n);

    result = triangular(n);

    printf("Triangular number = %d", result);

    return 0;
}
