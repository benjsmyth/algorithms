#include <stdio.h>
#include <stdlib.h>

void print(int* array, int size) {
  for (int i=0; i < size; i++)
    printf("%d\n", array[i]);
  return;
}

int* readInts(int count, char* strings[]) {
  int* ints = malloc( sizeof(int) * (count-1) );
  for (int i=1; i < count; i++)
    ints[i-1] = atoi(strings[i]);
  return ints;
}

void swap(int i, int j, int* array) {
  int temp = array[i];
  array[i] = array[j];
  array[j] = temp;
}
