def is_prime(num) -> bool:
    if num == 1:
        return False
    i = 2
    while i * i <= num:
        if num % i == 0:
            return False
        i += 1
    return True


test_count = int(input())

for _ in range(test_count):
    num = int(input())
    print("YES") if is_prime(num) else print("NO")
