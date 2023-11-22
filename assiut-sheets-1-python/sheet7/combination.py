def get_combinations(n, r, x=1, y=1):
    if not r:
        return x // y
    x *= n
    y *= r
    return get_combinations(n - 1, r - 1, x, y)


n, r = [int(num) for num in input().split()]
print(get_combinations(n, r)) if n and r else print(1)
