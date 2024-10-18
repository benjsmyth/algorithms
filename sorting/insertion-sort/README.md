# Insertion sort

## Algorithm
Insertion sort is a stable, online sorting algorithm that places unordered elements towards the beginning of the array.
```
ALGORITHM insertionSort(array, N):
    FOR 1 <= i < N:
        FOR i >= j > 0:
            IF array[j] < array[j-1]:
                swap(array, j, j-1)
            END IF
        END FOR
    END FOR
END ALGORITHM
```
Insertion sort can be improved by copying elements rather than swapping them.
```
ALGORITHM insertionSort2(array, N):
    FOR 1 <= i < N:
        x := array[i]
        j := i
        WHILE (j > 0) AND (x < array[j-1]):
            array[j] := array[j-1]
            j := j - 1
        END WHILE
        array[j] := x
    END FOR
END ALGORITHM
```