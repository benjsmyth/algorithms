# Sorting algorithms
A collection of common sorting algorithms.

## Shared methods
Methods that are commonly used by sorting algorithms.

---
### `swap`
The `swap` method exchanges the values between two positions in an array.
```
METHOD swap(A, i, j):
    temp := A[i]
    A[i] := A[j]
    A[j] := temp
END METHOD
```
