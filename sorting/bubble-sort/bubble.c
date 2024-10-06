#include <stdio.h>

int main(void) {

  int array[] = {6,3,4,9,8,6,1,4,2,3};
  int i, j, temp, len = 10;

  for (i = 0; i < len; i++) {
    for (j = 0; j < len-1; j++) {
      if (array[j] > array[j + 1]) {

        temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
      }
    }
  }

  for (i = 0; i < len; i++) {

    printf("%d\n", array[i]);
  }

  return 0;
}
