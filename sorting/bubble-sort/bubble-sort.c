#include "../sorting.h"
#include <stdbool.h>

void bubbleSort(int A[], const int N) {
    for (int i=0; i < N; i++) {
        for (int j=1; j < N; j++) {
            if (A[j] < A[j-1]) swap(A, j, j-1);
        }
    }
}

void bubbleSort2(int A[], const int N) {
    bool swapped;
    do {
        swapped = false;
        for (int i=1; i < N; i++) {
            if (A[i] < A[i-1]) {
                swap(A, i, i-1);
                swapped = true;
            }
        }
    } while (swapped);
}

void bubbleSort3(int A[], const int N) {
    int n = N;
    do {
        int sorted = 0;
        for (int i=1; i < N; i++) {
            if (A[i] < A[i-1]) {
                swap(A, i, i-1);
                sorted = i;
            }
        }
        n = sorted;
    } while (n > 1);
}

int main(int argc, char* argv[]) {
  const int N = argc - 1;
  int* A = parseInts(argv, N);
  bubbleSort(A, N);
  print(A, N);
  free(A);
}
