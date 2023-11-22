x1, x2, x3 = [int(n) for n in input().split()]

min_d = max(x1, x2, x3)

for i in range(min(x1, x2, x3), max(x1, x2, x3) + 1):
    d = abs(x1 - i) + abs(x2 - i) + abs(x3 - i)
    if d < min_d:
        min_d = d

print(min_d)
