#include <stdio.h>
#include <stdlib.h>

int* parseInts(int size, char* argv[]) {
  int* ints = malloc( sizeof(int) * (size - 1) );
  for (int i = 1; i < size + 1; i++)
    ints[i - 1] = atoi(argv[i]);
  return ints;
}

void print(int size, int* array) {
  for (int i = 0; i < size; i++)
    printf("%d ", array[i]);
  printf("\n");
}

void swap(int i, int j, int* array) {
  int temp = array[i];
  array[i] = array[j];
  array[j] = temp;
}
