def isPrime(num):
    for i in range(2, num):
        if num % i == 0: return False
    return True

num = int(input())

for i in range(2, num + 1):
    if isPrime(i):
        print(i, end=" ")