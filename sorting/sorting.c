#include "bubble-sort/bubble-sort.c"

int main(int argc, char* argv[]) {
    const int N = argc-1;
    int array[N], array2[N], array3[N];

    for (int i=0; i < N; i++) {
        const int I = atoi(argv[i+1]);
        array[i] = I;
        array2[i] = I;
        array3[i] = I;
    }

    bubbleSort(array, N);
    printf("bubbleSort\n");
    print(array, N);

    bubbleSort2(array2, N);
    printf("bubbleSort2\n");
    print(array2, N);

    bubbleSort3(array3, N);
    printf("bubbleSort3\n");
    print(array3, N);

    return 0;
}