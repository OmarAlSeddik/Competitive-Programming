from math import ceil


n, m = [int(num) for num in input().split()]

if m > n:
    print(-1)

else:
    x = ceil(n/2)
    while (x % m):
        x += 1
    print(x)
