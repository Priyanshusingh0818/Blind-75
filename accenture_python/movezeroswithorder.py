def movezeros(arr):
    write = 0
    for read in range(len(arr)):
        if arr[read] != 0:
            arr[write] = arr[read]
            write += 1
    for i in range(write, len(arr)):
        arr[i] = 0


def movezeros(arr):
    write = 0
    for read in range(len(arr)):
        if arr[read] != 0:
            arr[write] = arr[read]
            write +=1
    for i in range(write,len(arr)):
        arr[i] = 0




def move(arr):
    write=0
    for read in range(len(arr)):
        if arr[read] != 0:
            arr[write] = arr[read]
            write+=1
    for i in range(write, len(arr)):
        arr[i] = 0


def move(arr):
    write = 0
    for read in range(len(arr)):
        if arr[read]!=0:
            arr[write] = arr[read]
            write+=1
    for i in range(write,len(arr)):
        arr[i] = 0