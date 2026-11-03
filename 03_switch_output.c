/* Q3. Demonstrate switch behavior.
   The notebook's switch(a, a+1) uses the comma operator:
   the switch expression evaluates to a+1. */
#include <stdio.h>

int main(void)
{
    int a = 97;

    switch (a, a + 1) {
        case 'a':
            printf("1\n");
            break;

        case 98:
            printf("2\n");
            break;

        default:
            printf("No matching case.\n");
    }

    return 0;
}
