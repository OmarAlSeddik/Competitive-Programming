def is_prime(n) -> bool:
    if n == 1:
        return False
    i = 2
    while i * i <= n:
        if n % i == 0:
            return False
        i += 1
    return True


a, b = [int(n) for n in input().split()]

next_prime = 0

for i in range(a + 1, b + 1):
    if is_prime(i):
        next_prime = i
        break

print("YES") if next_prime == b else print("NO")
