t = int(input())

for _ in range(t):
    n, s = [int(num) for num in input().split()]
    if s > n * 2:
        print("-1")
