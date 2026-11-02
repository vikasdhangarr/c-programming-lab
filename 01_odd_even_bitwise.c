/* Q1. Check whether a number is odd or even using a bitwise operator. */
#include <stdio.h>

int main(void)
{
    int number;

    printf("Enter an integer: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (number & 1)
        printf("%d is odd.\n", number);
    else
        printf("%d is even.\n", number);

    return 0;
}
