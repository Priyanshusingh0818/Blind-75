def remaining_count(arr):
    freq = {}
    for value in arr:
        freq[value] = freq.get(value,0) + 1
    answer = 0
    for count in freq.values():
        answer += count % 2
    return answer

def remaining(arr):
    freq = {}
    for value in arr:
        freq[value] = freq.get(value,0) + 1
        answer = 0
        for count in freq.values():
            answer += count % 2
        return answer

def remain(arr):
    freq = {}
    for value in arr:
        freq[value]= freq.get(value,0) + 1
        answer = 0
        for count in freq.values():
            answer += count % 2
        return answer


def remain(arr):
    freq={}
    for value in arr:
        freq[value] = freq.get(value,0) + 1
        answer = 0
        for count in freq.values():
            answer+= count %2
        return answer