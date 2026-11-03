**Q8. Write a C program to calculate the discount and final payable amount based on the purchase amount.**

The program should accept the purchase amount from the user and apply discounts according to the following conditions:

- If the purchase amount is less than ₹1,000, give a 5% discount.
- If the purchase amount is ₹1,000 or more but less than ₹3,000, give a 10% discount.
- If the purchase amount is ₹3,000 or more but less than ₹5,000, give a 12% discount.
- If the purchase amount is ₹5,000 or more, give a 15% discount.

Calculate and display:
1. Discount amount
2. Final amount payable after discount

#include <stdio.h>

int main()
{
    float amount, discount, payable;

    printf("Enter purchase amount: ");
    scanf("%f", &amount);

    if (amount < 1000)
    {
        discount = amount * 0.05;
    }
    else if (amount < 3000)
    {
        discount = amount * 0.10;
    }
    else if (amount < 5000)
    {
        discount = amount * 0.12;
    }
    else
    {
        discount = amount * 0.15;
    }

    payable = amount - discount;

    printf("Discount = %.2f\n", discount);
    printf("Amount to be paid = %.2f\n", payable);

    return 0;
}
