#include "../sorting.h"
#include <stdbool.h>
#include <stdlib.h>

void bubbleSort(int array[], const int N) {
    int n = 0;
    do {
        for (int i=1; i < N; i++) {
            if (array[i] < array[i-1])
                swap(array, i, i-1);
        }
        ++n;
    }
    while (n < N);
}

void bubbleSort2(int array[], const int N) {
    bool swapped;
    do {
        swapped = false;
        for (int i=1; i < N; i++) {
            if (array[i] < array[i-1]) {
                swap(array, i, i-1);
                swapped = true;
            }
        }
    }
    while (swapped);
}

void bubbleSort3(int array[], const int N) {
    int n = N;
    do {
        int sorted = 0;
        for (int i=1; i < N; i++) {
            if (array[i] < array[i-1]) {
                swap(array, i, i-1);
                sorted = i;
            }
        }
        n = sorted;
    }
    while (n > 1);
}

int main(int argc, char* argv[]) {
    const int N = argc-1;
    int array[N], array2[N], array3[N];

    for (int i=0; i < N; i++) {
        const int I = atoi(argv[i+1]);
        array[i] = I;
        array2[i] = I;
        array3[i] = I;
    }

    bubbleSort(array, N);
    printf("bubbleSort\n");
    print(array, N);

    bubbleSort2(array2, N);
    printf("bubbleSort2\n");
    print(array2, N);

    bubbleSort3(array3, N);
    printf("bubbleSort3\n");
    print(array3, N);

    return 0;
}