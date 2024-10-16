# Bubble sort

## Algorithm
Bubble sort is a stable, online sorting algorithm that propagates unordered elements towards the end of the array. Each time the algorithm runs through the array, it effectively sorts the next highest element. This process repeats as many times as the length of the array.
```
ALGORITHM bubbleSort(array, N):
    n := 0
    WHILE n < N
        FOR 1 <= i < N:
            IF array[i] < array[i-1]:
                swap(array, i, i-1)
            END IF
        END FOR
        n += 1
END ALGORITHM
```
Bubble sort can be improved by terminating when the array has been sorted. To do this, the algorithm must keep track of a Boolean variable `swapped` that remembers whether or not an element was swapped during the previous run through the array. When all the elements have been sorted, `swapped` remains `false` and the algorithm terminates early.
```
ALGORITHM bubbleSort2(array, N):
    swapped := TRUE
    WHILE swapped:
        swapped := FALSE
        FOR 1 <= i < N:
            IF array[i] < array[i-1]:
                swap(array, i, i-1)
                swapped := TRUE
            END IF
        END FOR
END ALGORITHM
```

## Optimization
Bubble sort can be optimized by ignoring elements that have already been sorted. After every run, the array can be virtually cut-off from the sorted portion, and this cut-off is the index `sorted` where the previous swap occurred. If the cut-off reaches `1`, the algorithm terminates; if the array is sorted early, then the cut-off remains `0` and the algorithm terminates early.
```
ALGORITHM bubbleSort3(array, N):
    n := N
    WHILE n > 1:
        sorted := 0
        FOR 1 <= i < n:
            IF array[i] < array[i-1]:
                swap(array, i, i-1)
                sorted := i
            END IF
        END FOR
        n := sorted
END ALGORITHM
```

## Complexity
Optimized or not, bubble sort is an inefficient algorithm. In the best case its time complexity is `O(N)`, but in the average and worst cases that becomes `O(N^2)` because the algorithm must compare an element to the rest of the elements in the array. However, bubble sort has a space complexity of `O(1)` because it only requires a constant amount of auxiliary space.
