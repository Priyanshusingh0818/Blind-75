n=int(input())
a=list(map(int,input().split()))

m = int(input())
b=list(map(int,input().split()))

if n>=m:
    big = set(a)
    small = b
else:
    big = set(b)
    small=a
for x in small:
    if x not in big:
        print("NOT A SUB ARRAY")
        break
else:
    print("SUB ARRAY")


def check(arr1,arr2):
    if len(arr1) >= len(arr2):
        big = set(arr1)
        small = arr2
    else:
        big=set(arr2)
        small = arr1
    for x in small:
        if x not in big:
            return "Not A SUB ARRAY"
    return "SUB ARRAY"

def check(arr1,arr2):
    if len(arr1)>=len(arr2):
        big=set(arr1)
        small = arr2
    else:
        big = set(arr2)
        small = arr1
    for x in small:
        if x not in big:
            return "NOT A SUB ARRAY"
    return "SUB ARRAY"