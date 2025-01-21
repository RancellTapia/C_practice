#include <stdio.h>

int main()
{

    int number;

    printf("Please, enter a number\n");
    scanf("%d", &number);

    switch (number)
    {
    case == 0:

        printf("This number is zero\n");
        break;

    case < 0:

        printf("This number is negative\n");
        break;

    case > 0:

        printf("This number is positive\n");
        break;

    default:
        break;
    }

    return 0;
}