# Sorting algorithms
A collection of common sorting algorithms.

## Common array methods
Many sorting algorithms share common methods in order to inspect or manipulate an array. These methods are stored here and referenced in the appropriate subdirectories of this repository.

---
### `length`
Counts and returns the number of elements in an array.
```
METHOD length(A):
    arraySize := size(A)
    elementSize := size(A[0])
    RETURN arraySize / elementSize
END METHOD
```
Here, `size` is assumed to be an intrinsic method that returns a number of bytes. In C, this corresponds to the `sizeof` operator; in higher-level programming languages, such as Java or Python, the size of an array is already an accessible property.

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
