def maxk(arr,k):
    if k<1 or k>len(arr):
        raise ValueError('invald k')

    window = 0
    for i in range(k):
        window+=arr[i]

    best = window
    for i in range(k,len(arr)):
        window+=arr[i] - arr[i-k]
        best = max(best,window)
    return best



def maxk(arr,k):
    if k<1 or k>len(arr):
        raise ValueError('invalid k')
    window = 0
    for i in range(k):
        window+=arr[i]

    best = window
    for i in range(k,len(arr)):
        window+=arr[i] - arr[i-k]
        best = max(best,window)

    return best


















def palindrome(s):
    left,right = 0, len(s)-1
    while left<right:
        while left<right and not s[left].isalnum():
            left+=1
        while left<right and not s[right].isalnum():
            right-=1
        if s[left].lower() != s[right].right():
            return False
        left+=1
        right-=1
    return True













def max(arr,k):
    if k<1 or k>len(arr):
        return ValueError('invalid k')
    window=0
    for i in range(k):
        window+=arr[i]

    best = window
    for i in range(k,len(arr)):
        window+=arr[i] - arr[i-k]
        best = max(best,window)
    return best
