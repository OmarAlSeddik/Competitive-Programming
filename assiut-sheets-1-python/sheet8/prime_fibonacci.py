def is_prime_fibonacci(num):
    prime_numbers = {3, 4, 5, 7, 11, 13, 17, 23, 29, 43, 47}
    return num in prime_numbers


t = int(input())

for _ in range(t):
    n = int(input())
    print("prime") if is_prime_fibonacci(n - 1) else print("not prime")
