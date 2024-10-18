from sys import argv

def insertionSort(array, N):
    for i in range(1, N):
        for j in range(i, 0, -1):
            if array[j] < array[j-1]:
                swap(array, j, j-1)

def insertionSort2(array, N):
    for i in range(1, N):
        x = array[i]
        j = i
        while j > 0 and x < array[j-1]:
            array[j] = array[j-1]
            j -= 1
        array[j] = x

def swap(A, i, j):
  temp = A[i]
  A[i] = A[j]
  A[j] = temp

# Prepare memory
N = len(argv) - 1
array = []
array2 = []

# Read integers
for x in argv[1:]:
    I = int(x)
    array.append(I)
    array2.append(I)

# Demonstrate
print("insertionSort")
insertionSort(array, N)
print(array)

print("insertionSort2")
insertionSort2(array2, N)
print(array2)