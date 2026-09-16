def anagram(s,t):
    if len(s) != len(t):
        return False
    freq = {}
    for ch in s:
        freq[ch] = freq.get(ch,0) + 1

    for ch in t:
        freq[ch] = freq.get(ch,0) - 1

    return all(count==0 for count in freq.values())


def anagram(s,t):
    if len(s) != len(t):
        return False

    freq={}
    for ch in s:
        freq[ch] = freq.get(ch,0) +1
    for ch in t:
        freq[ch] = freq.get(ch,0) - 1

    return all(count == 0 for count in freq.values())