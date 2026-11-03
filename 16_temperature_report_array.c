// **Q16. Write a C program to generate a temperature report for a given number of days using an array.**

// The program should:

// 1. Ask the user to enter the number of days (maximum 100).
// 2. Accept the temperature reading in Celsius for each day and store it in an array.
// 3. Calculate the sum of all temperature readings.
// 4. Display a temperature report showing each day's temperature and its weather category according to the following rules:
//    - **Hot:** Temperature greater than or equal to 40°C.
//    - **Pleasant:** Temperature greater than or equal to 25°C but less than 40°C.
//    - **Cold:** Temperature below 15°C.
//    - **Moderate:** Temperature greater than or equal to 15°C but less than 25°C.
// 5. Count the number of days in each category.
// 6. Calculate and display the average temperature.
// 7. Display a summary containing the total Hot, Pleasant, Moderate, and Cold days, along with the average temperature.

// If the entered number of days is less than or equal to 0 or greater than 100, display an appropriate error message.

#include <stdio.h>

int main()
{
    int n, i;
    float temp[100];
    float sum = 0, average;

    int hot = 0;
    int pleasant = 0;
    int cold = 0;
    int moderate = 0;

    printf("Enter number of days: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100)
    {
        printf("Invalid number of days.\n");
        return 0;
    }

    for (i = 0; i < n; i++)
    {
        printf("Enter temperature for day %d: ", i + 1);
        scanf("%f", &temp[i]);

        sum = sum + temp[i];
    }

    printf("\nTemperature Report:\n");

    for (i = 0; i < n; i++)
    {
        printf("Day %d: %.2f C - ", i + 1, temp[i]);

        if (temp[i] >= 40)
        {
            printf("Hot\n");
            hot++;
        }
        else if (temp[i] >= 25)
        {
            printf("Pleasant\n");
            pleasant++;
        }
        else if (temp[i] < 15)
        {
            printf("Cold\n");
            cold++;
        }
        else
        {
            printf("Moderate\n");
            moderate++;
        }
    }

    average = sum / n;

    printf("\n===== Summary =====\n");
    printf("Hot Days = %d\n", hot);
    printf("Pleasant Days = %d\n", pleasant);
    printf("Moderate Days = %d\n", moderate);
    printf("Cold Days = %d\n", cold);
    printf("Average Temperature = %.2f C\n", average);

    return 0;
}
