a, b = [int(n) for n in input().split()]
gcd = 2
lcm = a * b

for i in range(min(a, b), 3, -1):
    if a % i == 0 and b % i == 0:
        gcd = i
        break

for i in range(min(a, b), a * b):
    if i % a == 0 and i % b == 0:
        lcm = i
        break

print(gcd, lcm)
