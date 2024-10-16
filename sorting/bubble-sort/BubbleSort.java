public class BubbleSort {

    private static void swap(int[] array, int i, int j) {
        int temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }

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

    public static void main(String[] args) {

        final int N = args.length;
        int[] array = new int[N];

        for (int i=0; i < N; i++)
            array[i] = Integer.parseInt(args[i]);

        bubbleSort(array, N);

        for (int i=0; i < N; i++)
            System.out.println(array[i]);
    }
}