// Q10. Write a C program using a for loop to display the letters from A to N along with their corresponding numbers from 1 to 14.
//   and while and do while


  #include <stdio.h>

int main()
{
    char ch;
    int num;

    for (ch = 'A', num = 1; ch <= 'N'; ch++, num++)
    {
        printf("%c + %d", ch, num);

        if (ch != 'N')
            printf(" + ");
    }

    return 0;
}



  // using while 
#include <stdio.h>

int main()
{
    char ch = 'A';
    int num = 1;

    while (ch <= 'N')
    {
        printf("%c + %d", ch, num);

        if (ch != 'N')
            printf(" + ");

        ch++;
        num++;
    }

    return 0;
}

//using do while loop
#include <stdio.h>

int main()
{
    char ch = 'A';
    int num = 1;

    do
    {
        printf("%c + %d", ch, num);

        if (ch != 'N')
            printf(" + ");

        ch++;
        num++;

    } while (ch <= 'N');

    return 0;
}
  
