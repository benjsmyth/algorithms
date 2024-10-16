from sys import argv

def bubbleSort(array, N):
    n = 0
    while n < N:
        for i in range(1, N):
            if array[i] < array[i-1]:
                swap(array, i, i-1)
        n += 1
    return

def bubbleSort2(array, N):
    swapped = True
    while swapped:
        swapped = False
        for i in range(1, N):
            if array[i] < array[i-1]:
                swap(array, i, i-1)
                swapped = True
    return

def bubbleSort3(array, N):
    n = N
    while n > 1:
        sorted = 0
        for i in range(1, N):
            if array[i] < array[i-1]:
                swap(array, i, i-1)
                sorted = i
        n = sorted
    return

def swap(A, i, j):
  temp = A[i]
  A[i] = A[j]
  A[j] = temp

N = len(argv)-1
array = []
array2 = []
array3 = []

for x in argv[1:]:
    I = int(x)
    array.append(I)
    array2.append(I)
    array3.append(I)

print("bubbleSort")
bubbleSort(array, N)
print(array)

print("bubbleSort2")
bubbleSort2(array2, N)
print(array2)

print("bubbleSort3")
bubbleSort3(array3, N)
print(array3)