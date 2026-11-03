// **Q15. Write a C program to maintain and update the inventory of four computer products over a period of seven days.**

// The program should maintain inventory for the following products:

// 1. Desktop
// 2. Laptop
// 3. Mainframe
// 4. Terminal

// **Requirements:**

// 1. Accept the initial inventory quantities of all four products from the user.
// 2. Process inventory transactions for seven days using a `for` loop.
// 3. For each day, accept a Product ID from 1 to 4.
// 4. Use Product ID `0` to end the transactions for the current day.
// 5. For a valid Product ID, accept the transaction amount:
//    - Positive amount (`+`) represents a purchase and increases inventory.
//    - Negative amount (`-`) represents a sale and decreases inventory.
// 6. Update the appropriate inventory quantity using an array.
// 7. Display an error message for an invalid Product ID.
// 8. After seven days, display the final inventory of all four products.

// Use an array and loops to implement the inventory management system.

#include <stdio.h>

int main()
{
    int inventory[4];
    int day, id, amount;
    int i;

    printf("Enter initial inventory:\n");

    printf("Desktop: ");
    scanf("%d", &inventory[0]);

    printf("Laptop: ");
    scanf("%d", &inventory[1]);

    printf("Mainframe: ");
    scanf("%d", &inventory[2]);

    printf("Terminal: ");
    scanf("%d", &inventory[3]);

    for (day = 1; day <= 7; day++)
    {
        printf("\nDay %d\n", day);

        printf("Enter Product ID (1-4, 0 to end day): ");
        scanf("%d", &id);

        while (id != 0)
        {
            if (id >= 1 && id <= 4)
            {
                printf("Enter amount (+ purchase / - sale): ");
                scanf("%d", &amount);

                inventory[id - 1] =
                    inventory[id - 1] + amount;
            }
            else
            {
                printf("Invalid Product ID.\n");
            }

            printf("Enter Product ID (1-4, 0 to end day): ");
            scanf("%d", &id);
        }
    }

    printf("\nFinal Inventory:\n");

    printf("Desktop   = %d\n", inventory[0]);
    printf("Laptop    = %d\n", inventory[1]);
    printf("Mainframe = %d\n", inventory[2]);
    printf("Terminal  = %d\n", inventory[3]);

    return 0;
}
