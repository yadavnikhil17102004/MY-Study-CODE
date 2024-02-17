# array for radix sorting
arr = [0, 170, 45, 75, 90, 802, 24, 2, 66]
xvalue = [10, 100, 1000]

#sorting starts

for i in range(0, len(arr)):
        while i+1 < len(arr):
            a = (arr[i])%10
            b = (arr[i+1])%10
            if (a > b):
                temp = arr[i]
                arr[i] = arr[i+1]
                arr[i+1] = temp
            i += 1
print("(0)The sorted array is : ", arr )

for x in xvalue:  
    for i in range(0, len(arr)):
        while i+1 < len(arr):
            a = (arr[i]//x)%10
            b = (arr[i+1]//x)%10
            if (a > b):
                temp = arr[i]
                arr[i] = arr[i+1]
                arr[i+1] = temp
            i += 1
    print(f"({x})The sorted array is :", arr )

