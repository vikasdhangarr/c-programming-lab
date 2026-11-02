/* Q2. Swap two numbers without using a third variable (XOR method). */
#include <stdio.h>

int main(void)
{
    int a, b;

    printf("Enter two integers: ");
    if (scanf("%d %d", &a, &b) != 2) {
        printf("Invalid input.\n");
        return 1;
    }

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}
