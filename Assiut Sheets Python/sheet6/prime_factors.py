from collections import defaultdict


def is_prime(n):
    if n == 1:
        return False
    i = 2
    while i*i <= n:
        if n % i == 0:
            return False
        i += 1
    return True


def get_prime_factors(n, prime_factors):
    i = 2
    while i*i <= n:
        if n % i == 0:
            get_prime_factors(i, prime_factors)
            get_prime_factors(n // i, prime_factors)
            return
        i += 1
    prime_factors.append(n)


n = int(input())
prime_factors = []
get_prime_factors(n, prime_factors)

count = defaultdict(int)

for prime in prime_factors:
    count[prime] += 1

for i, prime in enumerate(list(set(prime_factors))):
    if i:
        print("*(%d^%d)" % (prime, count[prime]), end="")
    else:
        print("(%d^%d)" % (prime, count[prime]), end="")
