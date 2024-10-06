#include <stdio.h>
#include <stdlib.h>
#include "../sorting.h"

void bubbleSort(int* array, int size) {
  int swapped;
  do {
    swapped = 0;
    for (int i=0; i < size-1; i++) {
      if (array[i] > array[i+1]) {
        swap(i, array);
        swapped = 1;
      }
    }
  } while (swapped == 1);
  return;
}

int main(int argc, char* argv[]) {
  int* array = readInts(argc, argv);
  bubbleSort(array, argc-1);
  print(array, argc-1);
  return 0;
}
