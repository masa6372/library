from collections import Counter

def factorize(num):
    arr = []
    for i in range(2, num**(1/2)+1):
        while (num % i == 0):
            arr.append(i)
            num //= i
    if num > (int(num**(1/2))):
        arr.append(num)
    return arr

c = Counter(factorial(n)) 
