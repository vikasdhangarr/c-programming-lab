// **Q13. Write a C program to find the smallest number, largest number, and average of a set of numbers entered by the user.**

// The program should:

// 1. Ask the user to enter the total number of values (`n`).
// 2. Accept `n` numbers from the user.
// 3. Find the smallest number in the given set.
// 4. Find the largest number in the given set.
// 5. Calculate the average of all the entered numbers.
// 6. Display the smallest number, largest number, and average up to two decimal places.

// **Note:** Use a `for` loop to process the numbers and variables to maintain the minimum, maximum, and sum.


#include <stdio.h>

int main()
{
    int n, i;
    float num, smallest, largest;
    float sum = 0, average;

    printf("Enter number of numbers: ");
    scanf("%d", &n);

    printf("Enter number 1: ");
    scanf("%f", &num);

    smallest = num;
    largest = num;
    sum = num;

    for (i = 2; i <= n; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%f", &num);

        if (num < smallest)
            smallest = num;

        if (num > largest)
            largest = num;

        sum = sum + num;
    }

    average = sum / n;

    printf("\nSmallest = %.2f\n", smallest);
    printf("Largest = %.2f\n", largest);
    printf("Average = %.2f\n", average);

    return 0;
}
