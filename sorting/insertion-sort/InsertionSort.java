public class InsertionSort {

    public static void insertionSort(int[] array, final int N) {
        for (int i=1; i < N; i++)
            for (int j=i; j > 0; j--)
                if (array[j] < array[j-1])
                    swap(array, j, j-1);
    }

    public static void insertionSort2(int array[], final int N) {
        for (int i=1; i < N; i++) {
            int x = array[i];
            int j = i;
            while ( (j > 0) && (x < array[j-1]) ) {
                array[j] = array[j-1];
                j--;
            }
            array[j] = x;
        }
    }

    public static void main(String[] args) {

        // Prepare memory
        final int N = args.length;
        int[] array = new int[N],
            array2 = new int[N];

        // Read integers
        for (int i=0; i < N; i++) {
            final int I = Integer.parseInt(args[i]);
            array[i] = I;
            array2[i] = I;
        }

        // Demonstrate
        System.out.println("insertionSort");
        insertionSort(array, N);
        print(array, N);

        System.out.println("insertionSort2");
        insertionSort2(array2, N);
        print(array2, N);
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
}