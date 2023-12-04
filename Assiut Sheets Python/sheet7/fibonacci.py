def get_fibonacci(n, x=0, y=1, i=3):
    if n == 1:
        return x
    if n == 2:
        return y
    z = x + y
    if n == i:
        return z
    return get_fibonacci(n, y, z, i + 1)


n = int(input())
print(get_fibonacci(n))
