def secondlargest(arr):
    arr = list(set(arr))
    arr.sort(reverse=True)

    if len(arr)<2:
        return None
    return arr[1]


def second(arr):
    arr = list(set(arr))
    arr.sort(reverse=True)

    if(len(arr))<2:
        return None
    return arr[1]



def second(arr):
    arr = list(set(arr))
    arr.sort(reverse = True)

    if len(arr)<2:
        return None
    return arr[1]