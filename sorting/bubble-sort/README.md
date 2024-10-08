# Bubble sort
## Algorithm
Bubble sort is a **stable**, **online** sorting algorithm that works by propagating elements up the array. Each time the algorithm runs through the array, it effectively sorts the next highest element in the array. The algorithm repeats this process until the array is sorted.
```
ALGORITHM bubbleSort(A):
    n := LENGTH(A)
    FOR 0 <= i < n:
        FOR 1 <= j < n:
            IF A[j] < A[j-1]:
                swap(A, j, j-1)
            END IF
        END FOR
    END FOR
END ALGORITHM
```
## Optimization
Bubble sort can be optimized by terminating when the array has been sorted early. To do this, the algorithm must keep track of a Boolean variable `swapped` that remembers whether or not an element was swapped during the previous run through the list. When all the elements have been sorted, `swapped` remains `false` and the algorithm terminates early.
```
ALGORITHM bubbleSort(A):
    n := LENGTH(A)
    DO:
        swapped := FALSE
        FOR 1 <= i < n:
            IF A[i] < A[i-1]:
                swap(A, i, i-1)
                swapped := TRUE
            END IF
        END FOR
    WHILE swapped
END ALGORITHM
```
More generally, bubble sort can be optimized by ignoring elements that have already been sorted. After every run, the array can be virtually cut-off from the sorted portion, and this cut-off is the index `sorted` where the previous swap occurred. When the cut-off reaches `1`, the algorithm terminates; if the array is sorted early, then the cut-off remains `0` and the algorithm terminates early.
```
ALGORITHM bubbleSort(A):
    n := LENGTH(A)
    DO:
        sorted := 0
        FOR 1 <= i < n:
            IF A[i] < A[i-1]:
                swap(A, i, i-1)
                sorted := i
            END IF
        END FOR
        n = sorted
    WHILE n > 1
END ALGORITHM
```
## Complexity
Optimized or not, bubble sort is an inefficient algorithm. In the best case the time complexity is `O(N)`, but in the average and worst cases that becomes `O(N^2)` because the algorithm must compare an element to the rest of the elements in the list. However, bubble sort has a space complexity of `O(1)` because it only requires a constant amount of auxiliary space.
