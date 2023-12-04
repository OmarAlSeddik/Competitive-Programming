f, n, k = [int(x) for x in input().split()]

steps = 0

for i in range(f):
    steps += n + k * i

print(steps)
