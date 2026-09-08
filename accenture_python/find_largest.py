def largest(arr):
    if len(arr) < 1:
        return 0

    largest = arr[0]
    index = 0

    for i in range(1, len(arr)):
        if arr[i] > largest:
            largest = arr[i]
            index = i

    print(largest)
    print(index)