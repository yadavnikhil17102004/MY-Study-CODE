# array for radix sorting
arr = [0, 45, 75, 90, 802, 24, 2, 66]

#sorting starts
for i in range(0, len(arr)):
    while i+1 < len(arr):
        a = arr[i]%10
        b = arr[i+1]%10
        if (a > b):
            temp = arr[i]
            arr[i] = arr[i+1]
            arr[i+1] = temp
        i += 1
print("The sorted array is : ", arr )
for i in range(0, len(arr)):
    while i+1 < len(arr):
        a = (arr[i]//10)%10
        b = (arr[i+1]//10)%10
        if (a > b):
            temp = arr[i]
            arr[i] = arr[i+1]
            arr[i+1] = temp
        i += 1
print("The sorted array is : ", arr )
for i in range(0, len(arr)):
    while i+1 < len(arr):
        a = (arr[i]//100)%10
        b = (arr[i+1]//100)%10
        if (a > b):
            temp = arr[i]
            arr[i] = arr[i+1]
            arr[i+1] = temp
        i += 1
print("The sorted array is : ", arr )
