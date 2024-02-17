# array for bubble sorting
arr = [ 80, 69, 17, 60, 25, 41, 16, 43, 87, 79, 58, 71]

#sorting starts
for i in range(0, len(arr)):
    j = i+1
    while j < len(arr):

        a = arr[i]
        b = arr[j]
        if b < a :
            temp = arr[i]
            arr[i] = arr[j]
            arr[j] = temp
        
        j += 1

print("The sorted array is : ", arr )
