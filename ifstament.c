#include <stdio.h>

int main()
{

    int number;

    printf("Please, enter a number\n");
    scanf("%d", &number);

    if (number == 0)
    {

        printf("This number is zero");
    }
    else if (number < 0)
    {

        printf("This number is negative");
    }
    else
    {

        printf("This number is positive");
    }

    return 0;
}