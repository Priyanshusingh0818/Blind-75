def missing(arr):
    n=len(arr)
    expected = n*(n+1)//2
    actual = sum(arr)
    return expected - actual

def missing(arr):
    n = len(arr)
    expected = n*(n+1) //2
    actual = sum(arr)

    return expected-actual


def missing(arr):
    n = len(arr)
    expected = n*(n+1) //2
    actual = sum(arr)

    return expected - actual

def missing(arr):
    n=len(arr)
    expected=n*(n+1) //2
    actual = sum(arr)
    return expected - actual


def count(arr):
    freq={}

    for x in arr:
        freq[x] = freq.get(x,0)+1
    result=[]
    for i in sorted(freq):
        result.append((x,freq[x]))