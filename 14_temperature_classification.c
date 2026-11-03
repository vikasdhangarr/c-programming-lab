// **Q14. Write a C program to classify temperatures into different weather categories, count the number of days in each category, and calculate the average temperature.**

// The program should:

// 1. Ask the user to enter the number of temperatures to be recorded (minimum 10).
// 2. Accept the temperature readings using a `for` loop.
// 3. Classify each temperature according to these conditions:
//    - **Hot:** Temperature greater than or equal to 40°C.
//    - **Pleasant:** Temperature greater than or equal to 25°C but less than 40°C.
//    - **Cold:** Temperature below 15°C.
//    - **Moderate:** Temperature greater than or equal to 15°C but less than 25°C.
// 4. Count the number of readings in each category.
// 5. Calculate the average temperature.
// 6. Display the total number of Hot, Pleasant, Moderate, and Cold readings, along with the average temperature.

// If the user enters fewer than 10 temperatures, display an appropriate error message.


#include <stdio.h>

int main()
{
    int n, i;
    float temp, sum = 0, average;

    int hot = 0;
    int pleasant = 0;
    int cold = 0;
    int moderate = 0;

    printf("Enter number of temperatures (minimum 10): ");
    scanf("%d", &n);

    if (n < 10)
    {
        printf("Enter at least 10 temperatures.\n");
        return 0;
    }

    for (i = 1; i <= n; i++)
    {
        printf("Enter temperature %d: ", i);
        scanf("%f", &temp);

        sum = sum + temp;

        if (temp >= 40)
        {
            printf("Hot\n");
            hot++;
        }
        else if (temp >= 25)
        {
            printf("Pleasant\n");
            pleasant++;
        }
        else if (temp < 15)
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

    printf("\nHot Days = %d\n", hot);
    printf("Pleasant Days = %d\n", pleasant);
    printf("Moderate Days = %d\n", moderate);
    printf("Cold Days = %d\n", cold);
    printf("Average Temperature = %.2f\n", average);

    return 0;
}
