def diffrenceofsum(a,b):
    divisble_sum = 0
    not_divisible = 0

    for i in range(1,a+1):
        if i % b == 0:
            divisble_sum +=i
        else:
            not_divisible += i

    return not_divisible - divisble_sum
