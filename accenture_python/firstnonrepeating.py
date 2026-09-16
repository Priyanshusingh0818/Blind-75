def nonrepeat(s):
    freq={}
    for ch in s:
        freq[ch]= freq.get(ch,0) +1
    for i,ch in enumerate(s):
        if freq[ch] == 1:
            return i
    return -1


def nonrepeat(s):
    freq={}
    for ch in s:
        freq[ch] = freq(ch,0) + 1
    for i in enumerate(s):
        if freq[ch] == 1:
            return i
    return -1


def unique(s):
    freq={}
    for ch in s:
        freq[ch] = freq.get(ch,0) + 1
    for i, ch in enumerate(s):
        if freq[ch] == 1:
            return i
    return -1

def unique(s):
    freq={}
    for x in s:
        freq[x] = freq.get(x,0)+1
    for i,x in enumerate(s):
        if freq[x] == 1:
            return i
    return -1