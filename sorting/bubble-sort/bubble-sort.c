#include <stdio.h>
#include <stdlib.h>

void swap(int i, int* array) {
  int temp = array[i];
  array[i] = array[i+1];
  array[i+1] = temp;
}

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

void print(int* array, int size) {
  for (int i = 0; i < size; i++)
    printf("%d\n", array[i]);
  return;
}

int main(int argc, char* argv[]) {
  int size = argc-1;
  int array[size];
  for (int i=1; i < argc; i++)
    array[i-1] = atoi(argv[i]);
  bubbleSort(array, size);
  print(array, size);
  return 0;
}
