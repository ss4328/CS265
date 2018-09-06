import random


def swap(array, i, j):
    temp = array[i]
    array[i] = array[j]
    array[j] = temp


def quicksort(array, first_index, last_index):
    if (last_index - first_index) < 2:
        return
    else:
        randomInteger = random.randint(first_index, (last_index - 1))
        swap(array, first_index, randomInteger)

        last = first_index + 1
        for x in range(first_index + 1, last_index):
            if array[x] < array[first_index]:
                swap(array, last, x)
                last = last + 1

        swap(array, first_index, last - 1)
        quicksort(array, first_index, last - 1)
        quicksort(array, last, last_index)
        return array

def printArray(array, array2):

    inputMsg = "["
    for x in range(0, (len(array))):
        inputMsg += (str(array[x]))
        if (x!=((len(array))-1)):
            inputMsg +=", "


    inputMsg += "]"
    print("Input: " + inputMsg)

    outputMsg = "["
    for y in range(0, (len(array2))):
        outputMsg += (str(array2[y]))
        if (y!=((len(array2))-1)):
            outputMsg +=", "


    outputMsg += "]"
    print("Output: " + outputMsg)

print("Python 3 Quicksort")
size = int(input("Enter Size of Array:"))

newArr = [0] * size
for x in range(0, size):
    newArr[x] = int(input("Enter Value for A["+ str(x) +"]"))

newArr2 = newArr.copy()
output = [0] * len(newArr2)
output = quicksort(newArr2, 0, len(newArr2))
printArray(newArr, output)


del newArr[:]
del newArr2[:]
del output[:]

