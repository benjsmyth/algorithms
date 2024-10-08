# Bubble sort
## Algorithm
Bubble sort is a stable, online sorting algorithm that works by repeatedly swapping adjacents elements in a list. Each time the algorithm runs through the list, it effectively sorts the next highest element in the list. The algorithm repeats this process until the list is sorted.
```
ALGORITHM bubbleSort(L):
    FOR 0 <= i < n:
        FOR 1 <= j < n:
            IF L[j] < L[j-1]:
                swap(L, j, j-1)
            END IF
        END FOR
    END FOR
END ALGORITHM
```
## Optimization
Bubble sort can be optimized by terminating when the list has been sorted early. To do this, the algorithm can keep track of a Boolean variable `swapped` that checks whether or not an element was swapped during the last run through the list. During the last run, when all the elements have been sorted, `swapped` remains `false` and the algorithm terminates early.
```
ALGORITHM bubbleSort(L):
    n := LENGTH(L)
    DO:
        swapped := FALSE
        FOR 1 <= i <= n-1:
            IF L[i] < L[i-1]:
                swap(L, i, i-1)
                swapped := TRUE
            END IF
        END FOR
    WHILE swapped
END ALGORITHM
```
Bubble sort can be optimized further by ignoring elements that have already been sorted. After every run the list can be virtually cut-off from the sorted portion, and this cut-off is the index `sorted` where the last swap occurred. When the cut-off reaches `1`, the algorithm terminates; if the list is sorted early, then the cut-off remains `0` and the algorithm terminates early.
```
ALGORITHM bubbleSort(L):
    n := LENGTH(L)
    DO:
        sorted := 0
        FOR 1 <= i <= n-1:
            IF L[i] < L[i-1]:
                swap(L, i, i-1)
                sorted := i
            END IF
        END FOR
        n = sorted
    WHILE n > 1
END ALGORITHM
```
## Complexity
Optimized or not, bubble sort is an inefficient algorithm. In the best case the time complexity is `O(N)`, but in the average and worst cases that becomes `O(N^2)` because the algorithm must compare an element to the rest of the elements in the list. However, bubble sort has a space complexity of `O(1)` because it only requires a constant amount of auxiliary space.
