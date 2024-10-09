#include <stdio.h>
#include <stdlib.h>

int* parseInts(char* argv[], const int N) {
    int* array = malloc( sizeof(int) * (N-1) );
    for (int i=1; i < N+1; i++)
        array[i-1] = atoi(argv[i]);
    return array;
}

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
