def max_subarray(arr):
    if not arr:
        raise ValueError('non empty array req')

    current = best = arr[0]

    for i in range(1, len(arr)):
        current = max(arr[i],current + arr[i])
        best = max(best,current)
    return best


def max(arr):
    if not arr:
        raise ValueError('non')
    current = best=arr[0]
    for i in range(1,len(arr)):
        current=max(arr[i],current+arr[i])
        best= max(current,best)
    return best


def max(arr):
    if not arr:
        raise ValueError("empty no")
    current = best = arr[0]

    for i in range(1,len(arr)):
        current = max(arr[i],current + arr[i])
        best = max(best,current)
    return best






def max(arr):
    if not arr:
        raise ValueError('xyfehwuf')
    current = best = arr[0]
    for i in range(1,len(arr)):
        current = max(arr[i],current + arr[i])
        best = max(best,current)
    return best











def max(arr):
    if not arr:
        raise ValueError('non empty re')
    current = best = arr[0]
    for i in range(1,len(arr)):
        current = max(arr[i],current+arr[i])
        best = max(best,current)
    return best












def max_subarray(arr):
    if not arr:
        raise ValueError('empty needed')
    current = best = arr[0]
    for i in range(1,len(arr)):
        current = max(arr[i],current + arr[i])
        best = max(best,current)
    return best

