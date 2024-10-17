#include "../sorting.h"
#include <stdbool.h>
#include <stdlib.h>

void bubbleSort(int array[], const int N) {
    int n = 0;
    while (n < N) {
        for (int i=1; i < N; i++) {
            if (array[i] < array[i-1])
                swap(array, i, i-1);
        }
        n++;
    }
}

void bubbleSort2(int array[], const int N) {
    bool swapped = true;
    while (swapped) {
        swapped = false;
        for (int i=1; i < N; i++) {
            if (array[i] < array[i-1]) {
                swap(array, i, i-1);
                swapped = true;
            }
        }
    }
}

void bubbleSort3(int array[], const int N) {
    int n = N;
    while (n > 1) {
        int sorted = 0;
        for (int i=1; i < N; i++) {
            if (array[i] < array[i-1]) {
                swap(array, i, i-1);
                sorted = i;
            }
        }
        n = sorted;
    }
}

int main(int argc, char* argv[]) {

    // Prepare memory
    const int N = argc-1;
    int array[N], array2[N], array3[N];

    // Read integers
    for (int i=0; i < N; i++) {
        const int I = atoi(argv[i+1]);
        array[i] = I;
        array2[i] = I;
        array3[i] = I;
    }

    // Demonstrate
    printf("bubbleSort\n");
    bubbleSort(array, N);
    print(array, N);

    printf("bubbleSort2\n");
    bubbleSort2(array2, N);
    print(array2, N);

    printf("bubbleSort3\n");
    bubbleSort3(array3, N);
    print(array3, N);

    return 0;
}