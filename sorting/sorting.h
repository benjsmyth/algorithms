#include <stdio.h>

void print(int array[], const int N) {
    putchar('[');
    for (int i=0; i < N; i++)
        printf(i < N-1 ? "%d, "
            : "%d]\n", array[i]);
}

void swap(int array[], int i, int j) {
    int temp = array[i];
    array[i] = array[j];
    array[j] = temp;
}
