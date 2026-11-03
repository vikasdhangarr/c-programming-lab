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
#include <conio.h>

void main()
{
    int hour, min, length;
    float gross, net, tax;

    printf("Enter starting hour (0-23)");
    scanf("%d", &hour);

    printf("Enter starting minute (0-59)");
    scanf("%d", &min);

    printf("Enter length of call in minute");
    scanf("%d", &length);

    gross = length * 0.40;
    net = gross;

    if (hour >= 18 || hour < 8)
    {
        net = net * 0.50;
    }
    if (length > 60)
    {
        net = net * 0.85;
    }
    tax = net * 0.04;
    net = net + tax;

    printf("\n Gross cost = %.2f rupees", gross);
    printf("\n Net Cost (after discount and tax) = %.2f", net);

    getch();
}
