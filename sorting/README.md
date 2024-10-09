# Sorting algorithms
A collection of common sorting algorithms.

## Common array methods
Many sorting algorithms share common methods in order to inspect or manipulate an array. These methods are stored here and referenced in the appropriate subdirectories of this repository.

---
### `length`
Counts the number of elements in an array.
```
ALGORITHM length(A):
    RETURN size(A) / size(A[0])
END ALGORITHM
```
Here, `size` is assumed to be an intrinsic method. In C, this corresponds to the `sizeof` operator; in higher-level programming languages, such as Java or Python, the size of an array is already an accessible property.

---
### `swap`
Exchanges the values between two positions in an array.
```
ALGORITHM swap(A, i, j):
    temp = A[i]
    A[i] = A[j]
    A[j] = temp
END ALGORITHM
```
