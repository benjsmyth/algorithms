# Sorting algorithms
A collection of common sorting algorithms.

## Common methods
Methods that are shared by algorithms are stored here and referenced in the appropriate subdirectories of this repository.

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
