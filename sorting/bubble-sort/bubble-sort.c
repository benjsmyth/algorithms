#include "../sorting.h"
#include <stdbool.h>

void bubbleSort(int array[], const int N) {
    int i = 0;
    do {
        for (int j=1; j < N; j++) {
            if (array[j] < array[j-1])
                swap(array, j, j-1);
        }
        ++i;
    }
    while(i < N);
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
        print(array, N);
    }
    while (n > 1);
}

int main(int argc, char* argv[]) {
    const int N = argc-1;
    int array[N], array2[N], array3[N];

    for (int i=1; i <= N; i++) {
        const int element = atoi(argv[i]);
        array[i-1] = element;
        array2[i-1] = element;
        array3[i-1] = element;
    }

    bubbleSort(array, N);
    printf("bubbleSort:\n"); print(array, N);

    bubbleSort(array2, N);
    printf("bubbleSort2\n"); print(array2, N);

    bubbleSort(array3, N);
    printf("bubbleSort3\n"); print(array3, N);

    return 0;
}
