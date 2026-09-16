def leaders(arr):
    result = []
    largest = None
    for i in range(len(arr) - 1, -1, -1):
        if largest is None or arr[i] > largest:
            result.append(arr[i])
            largest = arr[i]
        result.reverse()
        return result


    def leaders1(arr):
        result = []
        largest = None
        for i in range(len(arr) -1, -1, -1):
            if largest is None or arr[i] > largest:
                result.append(arr[i])
                largest = arr[i]
            result.reverse()
            return result






def leaders(arr):
    result = []
    largest = None
    for i in range(len(arr) -1, -1, -1):
        if largest is None or arr[i] > largest:
            result.append(arr[i])
            largest = arr[i]
        result.reverse()
        return result





def leaders(arr):
    result = []
    largest = None
    for i in range(len(arr) -1,-1,-1):
        if largest is None or arr[i] > largest:
            result.append(arr[i])
            largest = arr[i]
        result.reverse()
        return result

def leaders(arr):
    result=[]
    largest = None
    for i in range(len(arr) -1, -1, -1):
        if largest is None or arr[i] > largest:
            result.append(arr[i])
            largest = arr[i]
        result.reverse()
        return result

        
       





















    def leaders(arr):
        result = []
        largest= None
        for i in range(len(arr) -1, -1, -1):
            if largest is None or arr[i]> largest:
                result.append(arr[i])
                largest = arr[i]
            result.reverse()
            return result