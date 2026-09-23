def check(arr,target):
    left,right= 0,len(arr)

    while left<right:
        mid = (left+right) //2
        if arr[mid] < target:
            left = mid+1
        else:
            right = mid
    return left








def check(arr1,arr2):
    if len(arr1) >= len(arr2):
        big = set(arr1)
        small = arr2
    else:
        big=set(arr2)
        small = arr1
    for x in small:
        if x not in big:
            return "Not A SUB ARRAY"
    return "SUB ARRAY"



def binary(arr,target):
    left,right = 0,len(arr)-1

    while left<=right:
        mid = (left + right) // 2
        if arr[mid]==target:
            return mid
        if arr[mid] <target:
            left= mid+1
        else:
            right = mid -1
    return -1