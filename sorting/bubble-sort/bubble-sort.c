#include <stdio.h>
#include <stdlib.h>
#include "../sorting.h"

void bubbleSort(int size, int* ints) {
  int sorted;
  do {
    sorted = 0;
    for (int i = 1; i < size; i++) {
      if (ints[i - 1] > ints[i]) {
        swap(i-1, i, ints);
        sorted = i;
      }
    }
    size = sorted;
  } while (sorted > 1);
}

int main(int argc, char* argv[]) {
  const int SIZE = argc - 1;
  int* ints = parseInts(SIZE, argv);
  bubbleSort(SIZE, ints);
  print(SIZE, ints);
  free(ints);
}
