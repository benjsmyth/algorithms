#include "../sorting.h"

void bubbleSort(int n, int* ints) {
  int sorted;
  do {
    sorted = 0;
    for (int i = 1; i < n; i++) {
      if (ints[i] < ints[i-1]) {
        swap(i, i-1, ints);
        sorted = i;
      }
    }
    n = sorted;
  } while (n > 1);
}

int main(int argc, char* argv[]) {
  const int n = argc-1;
  int* ints = parseInts(n, argv);
  bubbleSort(n, ints);
  print(n, ints);
  free(ints);
}
