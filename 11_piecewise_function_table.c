// **Q11. Write a C program using a user-defined function to evaluate and display the values of a piecewise function f(x) for x ranging from 5.0 to 15.0 in increments of 0.5.**

// Define a function `f(float x)` using the following conditions:

// \[
// f(x)=
// \begin{cases}
// 3x+5x^3 & \text{if } 4.3<x<9.1\\
// 6x+8x^3 & \text{if } 9.1<x<15.5\\
// 0 & \text{otherwise}
// \end{cases}
// \]

// Requirements:

// 1. Create a user-defined function `f()` that accepts a floating-point value and returns the calculated result.
// 2. Use a `for` loop to generate x values from 5.0 to 15.0 with an increment of 0.5.
// 3. Call `f(x)` for each value.
// 4. Display the values of `x` and `f(x)` in tabular format.

#include <stdio.h>

float f(float x)
{
    if (x > 4.3 && x < 9.1)
    {
        return 3 * x + 5 * x * x * x;
    }
    else if (x > 9.1 && x < 15.5)
    {
        return 6 * x + 8 * x * x * x;
    }

    return 0;
}

int main()
{
    float x;

    printf("X\t\tf(X)\n");

    for (x = 5.0; x <= 15.0; x = x + 0.5)
    {
        printf("%.1f\t\t%.2f\n", x, f(x));
    }

    return 0;
}
