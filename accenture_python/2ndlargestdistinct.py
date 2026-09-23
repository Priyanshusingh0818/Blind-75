def secondlargest(arr):
    arr = list(set(arr))
    arr.sort(reverse=True)

    if len(arr)<2:
        return None
    return arr[1]


def second(arr):
    arr = list(set(arr))
    arr.sort(reverse=True)

    if(len(arr))<2:
        return None
    return arr[1]



def second(arr):
    arr = list(set(arr))
    arr.sort(reverse = True)

    if len(arr)<2:
        return None
    return arr[1]



def prime(n):
    if n<2:
        return False
    for i in range(2,int(n**0.5)+1):
        if n%i ==0:
            return False
    return True

def factorial(n):
    fact=1
    for i in range(1,n+1):
        fact*=i
    return fact

def fibonaci(n):
    ans=[]
    a=0
    b=1
    for i in range(n):
        ans.append()
        a,b=b,a+b
    return ans



def sumofdigits(n):
    total=0
    while n>0:
        total+=n%10
        n //=10
    return total