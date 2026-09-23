import heapq
def kth(arr,k):
    heapq.heapify(arr)

    ans=0
    for i in range(k):
        ans = heapq.heappop(arr)
    return ans