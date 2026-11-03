/* Q5. Find the grass area to cut and cutting time.
   Cutting rate: 2 square feet per second. */
#include <stdio.h>

int main(void)
{
    double yardLength, yardBreadth;
    double houseLength, houseBreadth;
    double yardArea, houseArea, grassArea, timeSeconds;

    printf("Enter length of yard (feet): ");
    if (scanf("%lf", &yardLength) != 1 || yardLength < 0) {
        printf("Invalid yard length.\n");
        return 1;
    }

    printf("Enter breadth of yard (feet): ");
    if (scanf("%lf", &yardBreadth) != 1 || yardBreadth < 0) {
        printf("Invalid yard breadth.\n");
        return 1;
    }

    printf("Enter length of house (feet): ");
    if (scanf("%lf", &houseLength) != 1 || houseLength < 0) {
        printf("Invalid house length.\n");
        return 1;
    }

    printf("Enter breadth of house (feet): ");
    if (scanf("%lf", &houseBreadth) != 1 || houseBreadth < 0) {
        printf("Invalid house breadth.\n");
        return 1;
    }

    yardArea = yardLength * yardBreadth;
    houseArea = houseLength * houseBreadth;
    grassArea = yardArea - houseArea;

    if (grassArea < 0) {
        printf("Error: house area cannot be larger than yard area.\n");
        return 1;
    }

    timeSeconds = grassArea / 2.0;

    printf("\nArea to be cut: %.2f square feet\n", grassArea);
    printf("Time required: %.2f seconds\n", timeSeconds);

    return 0;
}
