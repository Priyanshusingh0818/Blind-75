n, k = map(int, input().split())
arr = list(map(int, input().split()))

windowSum = sum(arr[:k])
maxSum = windowSum

for i in range(k, n):
    windowSum += arr[i]
    windowSum -= arr[i - k]

    maxSum = max(maxSum, windowSum)

print(maxSum)