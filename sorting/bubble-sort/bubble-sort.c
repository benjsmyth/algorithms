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