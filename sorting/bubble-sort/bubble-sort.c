#include <stdio.h>
#include <stdlib.h>
#include "../sorting.h"

void bubbleSort(int size, int* ints) {
  int swapped;
  do {
    swapped = 0;
    for (int i = 0; i < size - 1; i++) {
      if (ints[i] > ints[i + 1]) {
        swap(i, i+1, ints);
        swapped = 1;
      }
    }
  } while (swapped == 1);
}

int main(int argc, char* argv[]) {
  const int SIZE = argc - 1;
  int* ints = parseInts(SIZE, argv);
  bubbleSort(SIZE, ints);
  print(SIZE, ints);
  free(ints);
}
