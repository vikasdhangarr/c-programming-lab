// **Q12. Write a menu-driven C program to perform basic arithmetic operations using a `switch` statement and a `do-while` loop.**

// The program should:

// 1. Accept the first number from the user.
// 2. Accept an arithmetic operator (`+`, `-`, `*`, `/`).
// 3. Accept the second number.
// 4. Use a `switch` statement to perform the selected operation.
// 5. Display the calculated result up to two decimal places.
// 6. Handle division by zero and invalid operators.
// 7. Ask the user whether they want to continue (`y`/`n`).
// 8. Repeat the program while the user enters `y` or `Y`.

// **Operations supported:** Addition, subtraction, multiplication and division.

#include <stdio.h>

int main()
{
    float a, b, result;
    char op, choice;

    do
    {
        printf("\nEnter first number: ");
        scanf("%f", &a);

        printf("Enter operator (+, -, *, /): ");
        scanf(" %c", &op);

        printf("Enter second number: ");
        scanf("%f", &b);

        switch (op)
        {
            case '+':
                result = a + b;
                printf("Result = %.2f\n", result);
                break;

            case '-':
                result = a - b;
                printf("Result = %.2f\n", result);
                break;

            case '*':
                result = a * b;
                printf("Result = %.2f\n", result);
                break;

            case '/':
                if (b == 0)
                    printf("Cannot divide by zero.\n");
                else
                {
                    result = a / b;
                    printf("Result = %.2f\n", result);
                }
                break;

            default:
                printf("Invalid operator.\n");
        }

        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    return 0;
}
