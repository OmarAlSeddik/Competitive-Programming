def get_log2(n, c=0):
    if n == 1:
        return c
    n //= 2
    c += 1
    return get_log2(n, c)


n = int(input())
print(get_log2(n))
