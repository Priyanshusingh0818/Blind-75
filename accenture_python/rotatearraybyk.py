def rotate(arr):
    n = len(arr)
    if n == 0:
        return 
    k%=n
    def reverse(left,right):
        while left<right:
            arr[left], arr[right] = arr[right], arr[left]
            left+=1
            right-=1
    reverse(0,n-1)
    reverse(0,k-1)
    reverse(k,n-1)
































    def rotate(arr):
        n = len(arr)
        if n == 0:
            return 
        k%=n
        def reverse(left,right):
            while left<right:
                arr[left] , arr[right] = arr[right], arr[left]
                left+=1
                right-=1

        reverse(0,n-1)
        reverse(0,k-1)
        reverse(k,n-1)

def rotate(arr):
    n = len(arr)
    if n==0:
        return 
    k%=n
    def reverse(left,right):
        while left<right:
            arr[left], arr[right] = arr[right], arr[left]
            left+=1
            right-=1

    reverse(0,n-1)
    reverse(0,k-1)
    reverse(k,n-1)