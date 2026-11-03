**Q9. Write a C program to calculate an electricity bill based on the customer's account number, usage category, and electricity consumption.**

The program should accept:
1. Customer account number
2. Usage code: `R` for Residential, `C` for Commercial, or `I` for Industrial
3. Electricity consumed in kilowatt-hours (kWh)

Apply the following billing rules:

**1. Residential (R)**
- Up to 1,000 kWh: Fixed bill of ₹6
- Above 1,000 kWh: ₹6 + ₹0.52 per additional kWh

**2. Commercial (C)**
- Up to 1,000 kWh: Fixed bill of ₹60
- Above 1,000 kWh: ₹60 + ₹0.45 per additional kWh

**3. Industrial (I)**
Ask the customer to select Peak (`P`) or Off-Peak (`O`).

- **Peak:** Up to 1,000 kWh: ₹76; above 1,000 kWh: ₹76 + ₹0.65 per additional kWh.
- **Off-Peak:** Up to 1,000 kWh: ₹40; above 1,000 kWh: ₹40 + ₹0.028 per additional kWh.

Display the customer's account number and total amount due. Handle invalid usage codes and invalid industrial billing periods.




#include <stdio.h>

int main()
{
    int accountNo;
    char code, period;
    float units, bill;

    printf("Enter account number: ");
    scanf("%d", &accountNo);

    printf("Enter usage code (R/C/I): ");
    scanf(" %c", &code);

    printf("Enter kilowatt-hours used: ");
    scanf("%f", &units);

    switch (code)
    {
        case 'R':
        case 'r':

            if (units <= 1000)
                bill = 6;
            else
                bill = 6 + (units - 1000) * 0.52;

            break;

        case 'C':
        case 'c':

            if (units <= 1000)
                bill = 60;
            else
                bill = 60 + (units - 1000) * 0.45;

            break;

        case 'I':
        case 'i':

            printf("Enter P for Peak or O for Off-Peak: ");
            scanf(" %c", &period);

            if (period == 'P' || period == 'p')
            {
                if (units <= 1000)
                    bill = 76;
                else
                    bill = 76 + (units - 1000) * 0.65;
            }
            else if (period == 'O' || period == 'o')
            {
                if (units <= 1000)
                    bill = 40;
                else
                    bill = 40 + (units - 1000) * 0.028;
            }
            else
            {
                printf("Invalid period.\n");
                return 0;
            }

            break;

        default:
            printf("Invalid usage code.\n");
            return 0;
    }

    printf("\nAccount Number = %d\n", accountNo);
    printf("Amount Due = %.2f\n", bill);

    return 0;
}
