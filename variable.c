#include <stdio.h>

int main()
{
    /*
        variable    =   Allocated space in memory to store a value.
                        We refer to a variable's name to access the stored value.
                        That variable now behaves as if it was the value it contains.
                        But we need to declare what type of data we are storing.
    */

    int x;   // Declaration
    x = 123; // Initialization

    int y = 233; // Declaration + initialization

    int age = 33;            // Integer
    float gpa = 3.45;        // Floating point number
    char grade = 'A';        // Single character
    char name[] = "Rancell"; // Array of character

    printf("%d \n", age);
    printf("%f \n", gpa);
    printf("%c \n", grade);
    printf("%s \n", name);

    return 0;
}