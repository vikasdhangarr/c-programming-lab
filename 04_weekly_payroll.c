/* Q4. Calculate weekly employee pay. 
   Assumptions: 7 daily hour entries, overtime is paid at 1.5x for hours above 40, and tax is 3.625% of gross pay. */ 
#include <stdio.h> 

#define DAYS 7 
#define OVERTIME_LIMIT 40.0 
#define OVERTIME_MULTIPLIER 1.5 
#define TAX_RATE 3.625 

int main(void) { 
    int accountNumber, day; 
    double hourlyRate, dailyHours, totalHours = 0.0; 
    double regularHours, overtimeHours, grossPay, tax, netPay; 

    printf("Enter employee account number: "); 
    if (scanf("%d", &accountNumber) != 1) { 
        printf("Invalid account number.\n"); 
        return 1; 
    } 

    printf("Enter hourly rate: "); 
    if (scanf("%lf", &hourlyRate) != 1 || hourlyRate < 0) { 
        printf("Invalid hourly rate.\n"); 
        return 1; 
    } 

    for (day = 1; day <= DAYS; day++) { 
        printf("Enter hours worked on day %d: ", day); 
        if (scanf("%lf", &dailyHours) != 1 || dailyHours < 0) { 
            printf("Invalid hours.\n"); 
            return 1; 
        } 
        totalHours += dailyHours; 
    } 

    if (totalHours > OVERTIME_LIMIT) { 
        regularHours = OVERTIME_LIMIT; 
        overtimeHours = totalHours - OVERTIME_LIMIT; 
    } else { 
        regularHours = totalHours; 
        overtimeHours = 0.0; 
    } 

    grossPay = regularHours * hourlyRate + overtimeHours * hourlyRate * OVERTIME_MULTIPLIER; 
    tax = grossPay * TAX_RATE / 100.0; 
    netPay = grossPay - tax; 

    printf("\nEmployee account: %d\n", accountNumber); 
    printf("Total hours: %.2f\n", totalHours); 
    printf("Gross pay: Rs. %.2f\n", grossPay); 
    printf("Tax (%.3f%%): Rs. %.2f\n", TAX_RATE, tax); 
    printf("Net pay: Rs. %.2f\n", netPay); 

    return 0; 
}
