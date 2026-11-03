// **Q17. Write a C program to calculate the square root of a number using a user-defined function and the Newton-Raphson method.**

// The program should:

// 1. Accept a number from the user.
// 2. Define a user-defined function `squareRoot(double n)` that calculates the square root.
// 3. If the number is negative, return `-1` to indicate that its square root is not a real number.
// 4. If the number is zero, return `0`.
// 5. For a positive number, calculate the square root using the iterative formula:

//    `root = (x + n / x) / 2`

// 6. Repeat the calculation for 20 iterations.
// 7. Return and display the square root up to two decimal places.
// 8. Display an appropriate message for a negative input.

#include <stdio.h>

double squareRoot(double n)
{
    double x, root;
    int i;

    if (n < 0)
        return -1;

    if (n == 0)
        return 0;

    x = n;

    for (i = 0; i < 20; i++)
    {
        root = (x + n / x) / 2;
        x = root;
    }

    return root;
}

int main()
{
    double n, result;

    printf("Enter a number: ");
    scanf("%lf", &n);

    result = squareRoot(n);

    if (result == -1)
        printf("Square root of negative number is not real.");
    else
        printf("Square root = %.2lf", result);

    return 0;
}
