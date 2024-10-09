# Sorting algorithms
A collection of common sorting algorithms.

## Common array methods
Many sorting algorithms share common methods in order to inspect or manipulate an array. These methods are stored here and referenced in the appropriate subdirectories.

---
### `length`
Counts the number of elements in an array.
```
ALGORITHM length(array):
    RETURN size(array) / size(array[0])
END ALGORITHM
```
Here, `size` is assumed to be an intrinsic method. In C, this corresponds to the `sizeof` operator; in higher-level programming languages, such as Java or Python, the size of an array is already an accessible property.

---
### `swap`
Exchanges the values between two positions in an array.
```
ALGORITHM swap(L, i, j):
    temp = L[i]
    L[i] = L[j]
    L[j] = temp
END ALGORITHM
```
