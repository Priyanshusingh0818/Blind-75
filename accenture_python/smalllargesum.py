def smalllargesum(arr):
    if len(arr) < 3:
        return 0

    even = []
    odd = []

    for i in range(len(arr)):
        if i % 2 == 0:
            even.append(arr[i])
        else:
            odd.append(arr[i])

    even.sort()
    odd.sort()

    return even[-2] + odd[-2]