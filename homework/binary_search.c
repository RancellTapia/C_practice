#include <stdio.h>

int number_list[] = {1, 2, 3, 4, 5, 6, 7, 8, 19, 100  };
int number_list_size = 10;

int binary_search(int number_to_search, int lower_bound_index, int upper_bound_index);
int rotation_search(int lower_bound_index, int upper_bound_index);

int main()
{
//    int index =  binary_search(100, 0, number_list_size);
   int index =  rotation_search( 0, number_list_size - 1);
    printf("\n %d \n \n", index);

    return 0;
}

int binary_search(int number_to_search, int lower_bound_index, int upper_bound_index)
{
    int middle_index = (lower_bound_index + upper_bound_index) / 2;

    if (number_to_search == number_list[middle_index])
    {
        return middle_index;
    }

    if (number_to_search == number_list[lower_bound_index])
    {
        return lower_bound_index;
    }

    if (number_to_search == number_list[upper_bound_index])
    {
        return upper_bound_index;
    }

    if (lower_bound_index == upper_bound_index)
    {
        return -1;
    }

    if (number_to_search > number_list[middle_index])
    {
        lower_bound_index = middle_index;

    } else {
        upper_bound_index = middle_index;
    }



    return binary_search(number_to_search, middle_index, upper_bound_index);
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


//[8, 19, 100, 1, 2, 3, 4, 5, 6, 7, ];


// middle = 2
// lower = 8
//upper = 7

// si middle ( 2 ) es mayor que el upper ( 7 ), entonces el arreglo fue rotado y se tiene que buscar en la parte derecha