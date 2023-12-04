def base_conversion(n, binary=""):
    if n == 0:
        return binary
    digit = str(n % 2)
    binary = digit + binary
    n = int(n / 2)
    return base_conversion(n, binary)


t = int(input())

for _ in range(t):
    n = int(input())
    print(base_conversion(n))
