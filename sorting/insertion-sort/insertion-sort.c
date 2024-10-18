#include "../sorting.h"

void insertionSort(int n, int* array) {
    for (int i = 1; i < n; i++)
        for (int j = i; j > 0; j--)
            if (array[j] < array[j-1])
                swap(j, j-1, array);
}

void insertionSortCopy(int n, int* array) {
    for (int i = 1; i < n; i++) {
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
    const int n = argc - 1;
    int* array = parseInts(n, argv);
    insertionSort(n, array);
    print(n, array);
    free(array);
}
