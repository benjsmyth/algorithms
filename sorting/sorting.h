int* readInts(int argc, char* argv[]) {
  int* array = (int*)malloc(sizeof(int) * (argc-1));
  for (int i=1; i < argc; i++)
    array[i-1] = atoi(argv[i]);
  return array;
}

void print(int* array, int size) {
  for (int i = 0; i < size; i++)
    printf("%d\n", array[i]);
  return;
}

void swap(int i, int* array) {
  int temp = array[i];
  array[i] = array[i+1];
  array[i+1] = temp;
}
