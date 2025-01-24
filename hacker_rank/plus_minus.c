// https://www.hackerrank.com/challenges/plus-minus/problem?isFullScreen=true

#include <stdio.h>

int main() {
    int arr[] = {-4, 3, -9, 0, 4, 1};
    int arr_size = 6;

    int positive_count = 0;
    int negative_count = 0;
    int zero_count = 0;

    for (int i = 0; i < arr_size; i++) {
        if (arr[i] > 0) {
            positive_count++;
        } else if (arr[i] < 0) {
            negative_count++;
        } else {
            zero_count++;
        }
    }

    printf("%.6f\n", (float) positive_count / arr_size);
    printf("%.6f\n", (float) negative_count / arr_size);
    printf("%.6f\n", (float) zero_count / arr_size);
}