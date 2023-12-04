def is_lucky(n):
    while (n > 0):
        digit = n % 10
        if digit != 4 and digit != 7:
            return False
        n = n // 10
    return True


def is_almost_lucky(n):
    if is_lucky(n):
        return True
    for i in range(4, n):
        if is_lucky(i) and n % i == 0:
            return True
        i += 1
    return False


n = int(input())
print("YES") if is_almost_lucky(n) else print("NO")
