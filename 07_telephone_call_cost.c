**Q7. Write a C program to calculate the gross cost and net cost of a telephone call based on its starting time and duration.**

The program should accept the following inputs:
1. Starting hour (0–23)
2. Starting minute (0–59)
3. Length of the call in minutes

Apply the following rules:

- The basic call rate is ₹0.40 per minute.
- If the call starts at or after 6:00 PM (18:00) or before 8:00 AM (08:00), give a 50% discount.
- If the call duration is more than 60 minutes, apply an additional 15% discount to the cost after the first discount.
- Add 4% tax to the discounted cost.

Display the gross cost and the final net cost after discounts and tax.

#include <stdio.h>

int main()
{
    int hour, minutes;
    float grossCost, discount = 0;
    float discountedCost, tax, finalCost;

    printf("Enter starting hour (0-23): ");
    scanf("%d", &hour);

    printf("Enter call duration in minutes: ");
    scanf("%d", &minutes);

    grossCost = minutes * 0.40;

    if (hour >= 21 || hour < 8)
    {
        discount = discount + 50;
    }

    if (minutes > 60)
    {
        discount = discount + 15;
    }

    discountedCost = grossCost - (grossCost * discount / 100);

    tax = discountedCost * 0.04;

    finalCost = discountedCost + tax;

    printf("\nGross Cost = %.2f\n", grossCost);
    printf("Cost After Discount = %.2f\n", discountedCost);
    printf("Tax = %.2f\n", tax);
    printf("Final Cost = %.2f\n", finalCost);

    return 0;
}
