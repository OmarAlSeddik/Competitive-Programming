def get_combinations(a, b, x=1, y=1):
    if not b:
        return x // y
    x *= a
    y *= b
    return get_combinations(a - 1, b - 1, x, y)


def get_permutations(a, b, x=1, y=1):
    if not a and not b:
        return x // y
    if a:
        x *= a
        a -= 1
    if b:
        y *= b
        b -= 1
    return get_permutations(a, b, x, y)


a, b = [int(n) for n in input().split()]
print(get_combinations(a, b), get_permutations(a, a - b))
