#include "../sorting.h"

void insertionSort(int n, int* array) {
  for (int i = 1; i < n; i++)
    for (int j = i; j > 0; j--)
			if (array[j] < array[j-1])
      	swap(j, j-1, array);
}

int main(int argc, char* argv[]) {
  const int n = argc - 1;
  int* array = parseInts(n, argv);
  insertionSort(n, array);
  print(n, array);
  free(array);
}
