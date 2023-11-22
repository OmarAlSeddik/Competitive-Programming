n, t = [int(num) for num in input().split()]

x = 1 * 10 ** (n - 1)

while x % t and x != 1 * 10 ** n:
    x += 1

print(x) if x != 1 * 10 ** n else print(-1)
