def min_length_sum(arr, target):
    left = 0
    total = 0
    best = len(arr) + 1

    for right, x in enumerate(arr):
        total += x

        while total >= target:
            best = min(best, right - left + 1)
            total -= arr[left]
            left += 1

    return 0 if best == len(arr) + 1 else best