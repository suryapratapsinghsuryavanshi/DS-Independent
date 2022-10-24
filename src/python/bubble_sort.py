# bubble sort in python

def bubble_sort(arr):
    n = len(arr)
    for i in range(1, n):
        for j in range(0, n-1):
            if arr[j] > arr[j+1]:
                temp = arr[j]
                arr[j] = arr[j+1]
                arr[j+1] = temp

    return arr

  
unsorted_arr = [3, 6, 7, 1, 5, 9, 2, 0, 4, 8]
sorted_arr = bubble_sort(unsorted_arr)
print(sorted_arr)
