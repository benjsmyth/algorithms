#include <stdio.h>
#include <stdlib.h>

void print(int size, int* array) {
  for (int i=0; i < size; i++)
    printf("%d\n", array[i]);
  return;
}

int* readInts(int argc, char* argv[]) {
  int* ints = malloc( sizeof(int) * (argc-1) );
  for (int i=1; i < argc; i++)
    ints[i-1] = atoi(argv[i]);
  return ints;
}

void swap(int i, int j, int* array) {
  int temp = array[i];
  array[i] = array[j];
  array[j] = temp;
}
