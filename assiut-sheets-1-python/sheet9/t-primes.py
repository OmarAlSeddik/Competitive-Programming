def is_t_prime(n) -> bool:
    if n < 4:
        return False
    i = 2
    count = 0
    while i * 2 <= n:
        if n % i == 0:
            count += 1
            if count > 1:
                return False
        i += 1
    return count == 1


n = int(input())
xs = [int(num) for num in input().split()]

for x in xs:
    print("YES") if is_t_prime(x) else print("NO")
