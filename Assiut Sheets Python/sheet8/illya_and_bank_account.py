def maximize(n):
    last_digit = abs(n) % 10
    n1 = -(abs(n) // 10)
    n2 = -(abs(n) // 100 * 10 + last_digit)
    return max(n1, n2)


n = int(input())

print(n) if n > -1 else print(maximize(n))
