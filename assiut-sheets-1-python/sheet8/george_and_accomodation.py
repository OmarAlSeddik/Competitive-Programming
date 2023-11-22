n = int(input())
count = 0

for _ in range(n):
    p, q = [int(n) for n in input().split()]
    if q - p > 1:
        count += 1

print(count)
