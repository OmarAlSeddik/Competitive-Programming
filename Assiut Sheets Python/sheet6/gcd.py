def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return a


def lcm(a, b):
    return abs(a * b) // gcd(a, b)


a, b = [int(n) for n in input().split()]

print(gcd(a, b), lcm(a, b))
