public class BubbleSort {

    public static void bubbleSort(int[] array, final int N) {
        int n = 0;
        do {
            for (int i=1; i < N; i++) {
                if (array[i] < array[i-1])
                    swap(array, i, i-1);
            }
            ++n;
        }
        while (n < N);
    }

    public static void bubbleSort2(int array[], final int N) {
        boolean swapped;
        do {
            swapped = false;
            for (int i=1; i < N; i++) {
                if (array[i] < array[i-1]) {
                    swap(array, i, i-1);
                    swapped = true;
                }
            }
        }
        while (swapped);
    }

    public static void bubbleSort3(int array[], final int N) {
        int n = N;
        do {
            int sorted = 0;
            for (int i=1; i < N; i++) {
                if (array[i] < array[i-1]) {
                    swap(array, i, i-1);
                    sorted = i;
                }
            }
            n = sorted;
        }
        while (n > 1);
    }

    private static void print(int array[], final int N) {
        System.out.print('[');
        for (int i=0; i < N; i++)
            System.out.printf(i < N-1 ? "%d, "
                : "%d]\n", array[i]);
    }

    private static void swap(int[] array, int i, int j) {
        int temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }

    public static void main(String[] args) {

        final int N = args.length;
        int[] array = new int[N],
            array2 = new int[N],
            array3 = new int[N];

        for (int i=0; i < N; i++) {
            final int I = Integer.parseInt(args[i]);
            array[i] = I;
            array2[i] = I;
            array3[i] = I;
        }

        System.out.println("bubbleSort");
        bubbleSort(array, N);
        print(array, N);

        System.out.println("bubbleSort2");
        bubbleSort2(array2, N);
        print(array2, N);

        System.out.println("bubbleSort3");
        bubbleSort3(array3, N);
        print(array3, N);
    }
}