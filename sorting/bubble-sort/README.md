# Bubble sort
## Algorithm
Bubble sort is a stable sorting algorithm that works by propagating each element higher up the list until the element reaches its final position. Each time bubble sort runs through the list, it checks adjacent elements and swaps them if they are unordered. Bubble sort repeats this process until the list is sorted.

The algorithm keeps track of a Boolean variable `swapped` that checks whether an element was swapped during a run through the list. At the start of each run, `swapped` is `false`, but each time an element is swapped, `swapped` becomes `true`. After the last element is sorted, `swapped` remains `false` and the algorithm terminates.
```
ALGORITHM bubbleSort(L: List of items):
    n := LENGTH(L)
    DO:
        swapped := FALSE
        FOR 1 <= i <= n-1:
            IF L[i] < L[i-1]:
                swap(L[i], L[i-1])
                swapped := TRUE
            END IF
        END FOR
    WHILE NOT swapped
END
```

## Optimization
Bubble sort can be optimized by ignoring elements that have already been sorted. Consider that on the first run, there must be a largest element in the list; since it will be swapped with every element, it will be placed at the last position. Similarly, on the second run there must be a second-largest element in the list; it will be swapped with every element and placed at the second-last position. Therefore, after every run the list can be virtually cut-off from the sorted portion, and this cut-off is the index `sorted` where the last swap occurred. When the cut-off reaches `1`, the algorithm terminates.
```
ALGORITHM bubbleSort(L: List of items):
    n := LENGTH(L)
    DO:
        sorted := 0
        FOR 1 <= i <= n-1:
            IF L[i] < L[i-1]:
                swap(L[i], L[i-1])
                sorted := i
            END IF
        END FOR
        n = sorted
    WHILE n > 1
END
```
## Complexity
Bubble sort is a very inefficient algorithm. In the best case, the time complexity is `O(N)`, but in the average and worst cases, that becomes `O(N^2)` because the algorithm must compare an element to the rest of the elements in the list. Even when optimized, the time this takes grows exponentially as the number of elements grows. However, bubble sort has a space complexity of `O(1)`, as it only needs to consider the value of one element on every run.
