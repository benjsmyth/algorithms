# Sorting algorithms
A collection of common sorting algorithms.

## Common array methods
Many sorting algorithms share common methods in order to inspect or manipulate an array. These methods are stored here and referenced in the appropriate subdirectories of this repository.

---
### `swap`
Exchanges the values between two positions in an array.
```
METHOD swap(A, i, j):
    temp := A[i]
    A[i] := A[j]
    A[j] := temp
END METHOD
```
