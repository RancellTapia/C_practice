#include <stdio.h>

int number_list[] = { 1, 2, 3, 4, 5, 6, 7, 8, 19, 100 };
int size = sizeof(number_list) / sizeof(number_list[0]);

int rotation_search(int lower_bound_index, int upper_bound_index);

int main()
{
   int index =  rotation_search( 0, size - 1);

   if (index == -1) {
        printf("\nThe array was not rotated \n \n");
   } else {

        printf("\nThe array was rotated %d times \n \n", index);
   }

    return 0;
}


int rotation_search( int lower_bound_index, int upper_bound_index)
{
    int middle_index = (lower_bound_index + upper_bound_index) / 2;

    if (number_list[middle_index] > number_list[middle_index + 1]) {
        return middle_index + 1; //Return the index of the element that is the smallest, this is igual to the number of rotations
    }

    if (number_list[lower_bound_index] < number_list[upper_bound_index]) {

        return -1; //The array is not rotated
    }

    if (number_list[middle_index] >= number_list[lower_bound_index]) {
        lower_bound_index = middle_index + 1;
    } else {
        upper_bound_index = middle_index - 1;
    }

    

    return rotation_search(middle_index, upper_bound_index);
}


// Tarea: Hacer un algoritmo para determinar cuantas veces se rotó un
// arreglo ordenado de manera ascendente.
//
// El constraint para la solución es que debe ser O(log n).
//
// Por ejemplo:
// --------
// input [1, 100, 200, 300, 500, 1000, 1010]
// output 0
// --------
// input [1000, 1010, 1, 100, 200, 300, 500]
// output 2
// --------
// input [100, 200, 300, 500, 1000, 1010, 1]
// output 6
//
// Razonamiento:
// la primera rotación:
// [1010, 1, 100, 200, 300, 500, 1000]
// la segunada rotación:
// [1000, >>1010<<, 1, 100, 200, 300, 500]