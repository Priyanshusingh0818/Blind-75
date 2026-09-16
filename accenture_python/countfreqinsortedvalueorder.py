def freq(arr):
    freq={}

    for x in arr:
        freq[x] = freq.get(x,0)+1
    result = []
    for x in sorted(freq):
        result.append((x,freq[x]))

    return result


def freq(arr):
    freq={}
    for x in arr:
        freq[x] = freq.get(x,0)+1
    result = []
    for x in sorted(freq):
        result.append((x,freq[x]))
    return result


































def result(arr):
    freq={}
    for x in arr:
        freq[x] = freq.get(x,0) + 1
    result = []
    for x in sorted(freq):
        result.append((x,freq[x]))
    return result