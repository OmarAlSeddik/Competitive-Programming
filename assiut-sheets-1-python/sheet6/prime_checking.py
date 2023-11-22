def is_prime(n) -> bool:
    if n == 1:
        return False
    i = 2
    while i * i <= n:
        if n % i == 0:
            return False
        i += 1
    return True


n = int(input())
print("YES") if is_prime(n) else print("NO")
