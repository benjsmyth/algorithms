#include "../sorting.h"

void insertionSort(int* array, const int N) {
    for (int i=1; i < N; i++)
        for (int j=i; j > 0; j--)
            if (array[j] < array[j-1])
                swap(j, j-1, array);
}

void insertionSort2(int* array, const int N) {
    for (int i=1; i < N; i++) {
        int x = array[i];
        int j = i;
        while ( (j > 0) && (x < array[j-1]) ) {
            array[j] = array[j-1];
            j--;
        }
        array[j] = x;
    }
}

int main(int argc, char* argv[]) {

    // Prepare memory
    const int N = argc - 1;
    int array[N], array2[N];

    // Read integers
    for (int i=0; i < N; i++) {
        const int I = atoi(argv[i+1]);
        array[i] = I;
        array2[i] = I;
    }

    // Demonstrate
    printf("insertionSort\n");
    insertionSort(array, N);
    print(array, N);

    printf("insertionSort2\n");
    insertionSort2(array2, N);
    print(array2, N);
}