def is_power_2(n):
    while (n != 1):
        if n % 2:
            return False
        else:
            n /= 2
    return True


n = int(input())

print("YES") if is_power_2(n) else print("NO")
