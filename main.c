#include <stdio.h>

int get_max_number();
int get_max_number_prime();
int print_prime_numbers();
int get_max_number_positions(int numbers[], int size);
int is_prime(int number);
int get_max_number_funtion(int numbers[], int size);

int main()
{
    int numbers[] = {2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    // get_max_number();
    // get_max_number_prime();
    // print_prime_numbers(numbers, size);
    get_max_number_positions(numbers, size);

    return 0;
}

int get_max_number() // Exercise 1, cap 9
{
    int numbers[] = {2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    int maxPosition = 0;
    for (int i = 0; i < size - 1; i++)
    {

        if (numbers[maxPosition] < numbers[i + 1])
        {
            maxPosition = i + 1;
        }
    }
    printf("The bigger number is in the position %d \n", maxPosition);

    return 0;
}

int get_max_number_funtion(int numbers[], int size)
{
    int maxPosition = 0;
    for (int i = 0; i < size - 1; i++)
    {

        if (numbers[maxPosition] < numbers[i + 1])
        {
            maxPosition = i + 1;
        }
    }

    return numbers[maxPosition];
}

int get_max_number_prime() // Exercise 3, cap 9
{

    int numbers[] = {50, 50, 4, 5, 6, 7, 8, 9, 13, 29};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    int maxPosition = 0;
    for (int i = 0; i < size - 1; i++)
    {

        if (numbers[maxPosition] < numbers[i + 1])
        {
            if (is_prime(numbers[i + 1]))
            {

                maxPosition = i + 1;
            }
        }
    }
    printf("The bigger prime number is in the position %d \n", maxPosition);

    return 0;
}

int is_prime(int number)
{

    if (number < 1)
    {
        return 0;
    }

    for (int i = 2; i * i <= number; i++)
    {
        if (number % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

int print_prime_numbers() // Exercise 5, cap 9
{

    int prime_numbers[10];
    int position = 0;

    for (int i = 100; i <= 300; i++)
    {
        if (is_prime(i))
        {
            prime_numbers[position] = i;
            position++;
        }
    }

    for (int j = 0; j < (sizeof(prime_numbers) / sizeof(prime_numbers[0])); j++)
    {
        printf("The bigger prime number is in the position %d \n", prime_numbers[j]);
    }

    return 0;
}

int get_max_number_positions(int numbers[], int size) // Exercise 7, cap 9
{
    int positions[10];
    int step = 0;
    int max_number = get_max_number_funtion(numbers, size);

    for (int i = 0; i < size; i++)
    {
        if (numbers[i] == max_number)
        {
            positions[step] = i;
        }
    }

    printf("The max number is on position(s): \n");

    for (int i = 0; i < 10; i++)
    {
        printf("\n %d", positions[i]);
    }

    return 0;
}