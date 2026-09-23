def sort(arr,target):
    left,right = 0,len(arr)
    while left<right:
        mid = (left+right) // 2
        if arr[mid] < target:
            left = mid+1
        else:
            right = mid
    first = left
    left,right = 0,len(arr)
    while left<right:
        mid =(left+right) // 2

        if arr[mid] <=target:
            left = mid+1
        else:
            right = mid
    return left - first


def binary(arr,target):
    left,right = 0,len(arr)
    while left<right:
        mid = (left+right) // 2
        if arr[mid] < target:
            left  = mid+1
        else:
            right = mid
    return left



def binary(arr,target):
    left,right= 0,len(arr)
    while left<right:
        mid = (left+right) //2
        if arr[mid]<target:
            left = mid+1
        else:
            right = mid
    first = left

    left,right = 0,len(arr)
    while left<right:
        mid = (left+right) // 2
        if arr[mid] <= target:
            left = mid+1
        else:
            right = mid
    return left - first
