# to find maximum and minimum element of an array....

try:
    arr=[34,67,21,45]
    minimum=arr[0]
    maximum=arr[0]
    for i in range(len(arr)):

        if(arr[i]<minimum):
            minimum=arr[i]
            
        if(arr[i]>maximum):
            maximum=arr[i]

    print(minimum,maximum)
    
except: pass

